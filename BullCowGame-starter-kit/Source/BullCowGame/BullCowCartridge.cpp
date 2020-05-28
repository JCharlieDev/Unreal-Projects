// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"
#include "HiddenWordList.h"
//  #include "UnrealMathUtility.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    Isograms = GetValidWords(HiddenWords);

    //  Setting up game
    SetupGame();

    //PrintLine(TEXT("The number of possible words is: %i"), HiddenWords.Num());
    //PrintLine(TEXT("Number of valid words is: %i"), GetValidWords(HiddenWords).Num());
}

void UBullCowCartridge::OnInput(const FString& PlayerInput) // When the player hits enter
{
    if (bGameOver)
    {
        ClearScreen();
        SetupGame();
    }
    else
    {
        ProcessGuess(PlayerInput);
    }
}

void UBullCowCartridge::SetupGame()
{
    HiddenWord = Isograms[FMath::RandRange(0, (Isograms.Num() - 1))];
    Lives = HiddenWord.Len();

    bGameOver = false;


    //  Prints a welcome message
    PrintLine(TEXT("Hello!, Welcome to Bull and Cows Game!"));
    PrintLine(TEXT("Guess the %i letter word!"), HiddenWord.Len());
    PrintLine(TEXT("You have %i Lives"), Lives);
    PrintLine(TEXT("Type in your guess and \nPress enter to continue...\n"));
    PrintLine(TEXT("The HiddenWord is: %s."), *HiddenWord); //  Debug Line

    //  Promtp player for guess

    //const TCHAR HW[] = TEXT("Taco");
    ////const TCHAR HW[] = { TEXT('t'), TEXT('a'), TEXT('c'), TEXT('o'), TEXT('\0') };
    //PrintLine(TEXT("Character 1 of the hidden word is: %c"), HW[0]);
    //
    //HW;
}

void UBullCowCartridge::EndGame()
{
    bGameOver = true;

    PrintLine(TEXT("\nPress enter to play again..."));
}

void UBullCowCartridge::ProcessGuess(const FString& Guess)
{
    if (Guess == HiddenWord)
    {
        PrintLine(TEXT("You have won!"));
        EndGame();

        return;
    }

    //  Prompt to guess again
    //  Check right number of characters
    if (Guess.Len() != HiddenWord.Len())
    {
        PrintLine(TEXT("The hidden word is %i letters long"), HiddenWord.Len());
        PrintLine(TEXT("Sorry, try guessing again! \nYou have %i lives remaining"), Lives);
        return;
    }

    //  Check if Isogram
    if (!IsIsogram(Guess))
    {
        PrintLine(TEXT("No repeating letters!, guess again"));

        return;
    }

    //  Remove a life
    PrintLine(TEXT("Lost a life"));
    --Lives;

    if (Lives <= 0)
    {
        ClearScreen();

        PrintLine(TEXT("You have no lives left!"));
        PrintLine(TEXT("The hidden word was: %s"), *HiddenWord);

        EndGame();

        return;
    }
    
    //  Show the player the Bulls and Cows
    FBullCowCount Score = GetBullCows(Guess);

    PrintLine(TEXT("You have %i Bulls and %i Cows"), Score.Bulls, Score.Cows);
    PrintLine(TEXT("Guess again, you have %i lives left"), Lives);
}

bool UBullCowCartridge::IsIsogram(const FString& Word) const   //  It will not change any member variable
{
    int32 Index = 0;
    int32 Comparison = Index + 1;

    //  Checking for repeating letters
    for (Index = 0;  Index < Word.Len(); Index++)
    {
        for (Comparison = Index + 1; Comparison < Word.Len(); Comparison++)
        {
            if (Word[Index] == Word[Comparison])
            {
                return false;
            }
        }
    }
    return true;
}

TArray<FString> UBullCowCartridge::GetValidWords(const TArray<FString>& WordList) const
{
    TArray<FString> ValidWords;

    for (int32 Index = 0; Index != WordList.Num(); Index++)
    {
        if (WordList[Index].Len() >= 4 && WordList[Index].Len() <= 6 && IsIsogram(WordList[Index]))
        {
            ValidWords.Emplace(WordList[Index]);
        }
    }

    return ValidWords;
}

FBullCowCount UBullCowCartridge::GetBullCows(const FString& Guess) const
{
    FBullCowCount Count;

    for (int32 GuessIndex = 0; GuessIndex < Guess.Len(); GuessIndex++)
    {
        if (Guess[GuessIndex] == HiddenWord[GuessIndex])
        {
            Count.Bulls++;
            continue;
        }

        for (int32 HiddenIndex = 0; HiddenIndex < HiddenWord.Len(); HiddenIndex++)
        {
            if (Guess[GuessIndex] == HiddenWord[HiddenIndex])
            {
                Count.Cows++;
                break;
            }
        }
    }

    return Count;
}
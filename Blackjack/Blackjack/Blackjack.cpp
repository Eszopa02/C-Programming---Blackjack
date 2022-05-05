//Eden Szopa
//04/29/2022
//C++ Programming class at Columbia College Chicago

//Credits:
//Fisher_Yates Shuffle Algorithm - https://www.geeksforgeeks.org/shuffle-a-given-array-using-fisher-yates-shuffle-algorithm/

#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>

//Not sure if all of the #include messages are necessary to run the program but they are added in and 
//effort to solve the randomization of the cards, (the issue turned out to be that I was asking it to swap
//integers while my array was a string array). Problem in shuffling the deck of cards has been fixed since then. 

using namespace std;

int playerWins = 0;
int dealerWins = 0;
int ties = 0;

int turn = 0;

int playerPoint = 0;
int dealerPoint = 0;

int point = 0;

//Lines 30-58 uses the FIsher_Yates Shuffle Algorithm found on: https://www.geeksforgeeks.org/shuffle-a-given-array-using-fisher-yates-shuffle-algorithm/

void swap(string* a, string* b)
{
    string temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(string DeckOfCards[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << DeckOfCards[i] << " ";
    }
    std::cout << '\n';
}

void randomize(string DeckOfCards[], int n)
{
    srand(time(NULL));

    for (int i = n - 1; i > 0; i--)
    {
        int j = rand() % (i + 1);

        swap(&DeckOfCards[i], &DeckOfCards[j]);
    }
}

int main(void)
{
    int choice;


    //Considered breaking this Array up into two separate arrays for the Face and the Suits.
    //Had a couple of issues with this method with shuffling both arrays and combining them.
    //Hope to attempt this again in the future when revising this project. 
    std::string DeckOfCards[52] =
    {
        "Ace of Diamonds", "Ace of Spades", "Ace of Hearts", "Ace of Clubs",
        "Two of Diamonds", "Two of Spades", "Two of Hearts", "Two of Clubs",
        "Three of Diamonds", "Three of Spades", "Three of Hearts", "Three of Clubs",
        "Four of Diamonds", "Four of Spades", "Four of Hearts", "Four of Clubs",
        "Five of Diamonds", "Five of Spades", "Five of Hearts", "Five of Clubs",
        "Six of Diamonds", "Six of Spades", "Six of Hearts", "Six of Clubs",
        "Seven of Diamonds", "Seven of Spades", "Seven of Hearts", "Seven of Clubs",
        "Eight of Diamonds", "Eight of Spades", "Eight of Hearts", "Eight of Clubs",
        "Nine of Diamonds", "Nine of Spades", "Nine of Hearts", "Nine of Clubs",
        "Ten of Diamonds", "Ten of Spades", "Ten of Hearts", "Ten of Clubs",
        "Jack of Diamonds", "Jack of Spades", "Jack of Hearts", "Jack of Clubs",
        "Queen of Diamonds", "Queen of Spades", "Queen of Hearts", "Queen of Clubs",
        "King of Diamonds", "King of Spades", "King of Hearts", "King of Clubs"
    };

    do
    {
        std::cout << "\n0.Rules\n" << std::endl << "1. Play Game\n" << std::endl << "2.Exit\n";
        std::cin >> choice;

        switch (choice)
        {
        case 0:
            std::cout << "Here are the game rules.\n";
            std::cout << "1.Aces can either be 1 or 11 points.\n2.Dealer wins ties unless the plater has blackjack.";
            break;

        case 1:
            std::cout << "Thank you for playing.\n\n";

            while (turn < 100)
            {
                //Shuffle a deck of cards
                int n = sizeof(DeckOfCards) / sizeof(DeckOfCards[0]);
                randomize(DeckOfCards, n);

                std::cout << "Player's Cards: \n" << DeckOfCards[0] << '\n' << DeckOfCards[1];

                //If statements checking if card called has a specific string, this is used to determine
                //the amount of point each card is worth
                //Look into a way to simplify this
                //I attempted to change this by adding a separate array for the Suit and the Face and shuffling each individual array, wasn't able to get the cards to display 

                if (DeckOfCards[0] == "Ace of Diamonds")
                {
                    std::cout << "\nIs the Ace worht 1 point or 11?\n0. 1\n1. 11";
                    std::cin >> choice;

                    switch (choice)
                    {
                    case 0:
                        playerPoint++;
                        break;
                    case 1:
                        playerPoint += 11;
                        break;
                    }
                }

                if (DeckOfCards[1] == "Ace of Diamonds")
                {
                    std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                    std::cin >> choice;

                    switch (choice)
                    {
                    case 0:
                        playerPoint++;
                        break;
                    case 1:
                        playerPoint += 11;
                        break;
                    }
                }

                if (DeckOfCards[0] == "Ace of Spades")
                {
                    std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                    std::cin >> choice;

                    switch (choice)
                    {
                    case 0:
                        playerPoint++;
                        break;
                    case 1:
                        playerPoint += 11;
                        break;
                    }
                }

                if (DeckOfCards[1] == "Ace of Spades")
                {
                    std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                    std::cin >> choice;

                    switch (choice)
                    {
                    case 0:
                        playerPoint++;
                        break;
                    case 1:
                        playerPoint += 11;
                        break;
                    }
                }

                if (DeckOfCards[0] == "Ace of Hearts")
                {
                    std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                    std::cin >> choice;

                    switch (choice)
                    {
                    case 0:
                        playerPoint++;
                        break;
                    case 1:
                        playerPoint += 11;
                        break;
                    }
                }

                if (DeckOfCards[1] == "Ace of Hearts")
                {
                    std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                    std::cin >> choice;

                    switch (choice)
                    {
                    case 0:
                        playerPoint++;
                        break;
                    case 1:
                        playerPoint += 11;
                        break;
                    }
                }

                if (DeckOfCards[0] == "Ace of Clubs")
                {
                    std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                    std::cin >> choice;

                    switch (choice)
                    {
                    case 0:
                        playerPoint++;
                        break;
                    case 1:
                        playerPoint += 11;
                        break;
                    }
                }

                if (DeckOfCards[1] == "Ace of Clubs")
                {
                    std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                    std::cin >> choice;

                    switch (choice)
                    {
                    case 0:
                        playerPoint++;
                        break;
                    case 1:
                        playerPoint += 11;
                        break;
                    }
                }

                if (DeckOfCards[0] == "Two of Diamonds")
                {
                    playerPoint += 2;
                }

                if (DeckOfCards[1] == "Two of Diamonds")
                {
                    playerPoint += 2;
                }

                if (DeckOfCards[0] == "Two of Spades")
                {
                    playerPoint += 2;
                }

                if (DeckOfCards[1] == "Two of Spades")
                {
                    playerPoint += 2;
                }

                if (DeckOfCards[0] == "Two of Hearts")
                {
                    playerPoint += 2;
                }

                if (DeckOfCards[1] == "Two of Hearts")
                {
                    playerPoint += 2;
                }

                if (DeckOfCards[0] == "Two of Clubs")
                {
                    playerPoint += 2;
                }

                if (DeckOfCards[1] == "Two of Clubs")
                {
                    playerPoint += 2;
                }

                if (DeckOfCards[0] == "Three of Diamonds")
                {
                    playerPoint += 3;
                }

                if (DeckOfCards[1] == "Three of Diamonds")
                {
                    playerPoint += 3;
                }

                if (DeckOfCards[0] == "Three of Spades")
                {
                    playerPoint += 3;
                }

                if (DeckOfCards[1] == "Three of Spades")
                {
                    playerPoint += 3;
                }

                if (DeckOfCards[0] == "Three of Hearts")
                {
                    playerPoint += 3;
                }

                if (DeckOfCards[1] == "Three of Hearts")
                {
                    playerPoint += 3;
                }

                if (DeckOfCards[0] == "Three of Clubs")
                {
                    playerPoint += 3;
                }

                if (DeckOfCards[1] == "Three of Clubs")
                {
                    playerPoint += 3;
                }

                if (DeckOfCards[0] == "Four of Diamonds")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[1] == "Four of Diamonds")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[0] == "Four of Spades")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[1] == "Four of Spades")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[0] == "Four of Hearts")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[1] == "Four of Hearts")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[0] == "Four of Clubs")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[1] == "Four of Clubs")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[0] == "Four of Diamonds")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[1] == "Four of Diamonds")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[0] == "Four of Spades")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[1] == "Four of Spades")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[0] == "Four of Hearts")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[1] == "Four of Hearts")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[0] == "Four of Clubs")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[1] == "Four of Clubs")
                {
                    playerPoint += 4;
                }

                if (DeckOfCards[0] == "Six of Diamonds")
                {
                    playerPoint += 6;
                }

                if (DeckOfCards[1] == "Six of Diamonds")
                {
                    playerPoint += 6;
                }

                if (DeckOfCards[0] == "Six of Spades")
                {
                    playerPoint += 6;
                }

                if (DeckOfCards[1] == "Six of Spades")
                {
                    playerPoint += 6;
                }

                if (DeckOfCards[0] == "Six of Hearts")
                {
                    playerPoint += 6;
                }

                if (DeckOfCards[1] == "Six of Hearts")
                {
                    playerPoint += 6;
                }

                if (DeckOfCards[0] == "Six of Clubs")
                {
                    playerPoint += 6;
                }

                if (DeckOfCards[1] == "Six of Clubs")
                {
                    playerPoint += 6;
                }

                if (DeckOfCards[0] == "Seven of Diamonds")
                {
                    playerPoint += 7;
                }

                if (DeckOfCards[1] == "Seven of Diamonds")
                {
                    playerPoint += 7;
                }

                if (DeckOfCards[0] == "Seven of Spades")
                {
                    playerPoint += 7;
                }

                if (DeckOfCards[1] == "Seven of Spades")
                {
                    playerPoint += 7;
                }

                if (DeckOfCards[0] == "Seven of Hearts")
                {
                    playerPoint += 7;
                }

                if (DeckOfCards[1] == "Seven of Hearts")
                {
                    playerPoint += 7;
                }

                if (DeckOfCards[0] == "Seven of Clubs")
                {
                    playerPoint += 7;
                }

                if (DeckOfCards[1] == "Seven of Clubs")
                {
                    playerPoint += 7;
                }

                if (DeckOfCards[0] == "Eight of Diamonds")
                {
                    playerPoint += 8;
                }

                if (DeckOfCards[1] == "Eight of Diamonds")
                {
                    playerPoint += 8;
                }

                if (DeckOfCards[0] == "Eight of Spades")
                {
                    playerPoint += 8;
                }

                if (DeckOfCards[1] == "Eight of Spades")
                {
                    playerPoint += 8;
                }

                if (DeckOfCards[0] == "Eight of Hearts")
                {
                    playerPoint += 8;
                }

                if (DeckOfCards[1] == "Eight of Hearts")
                {
                    playerPoint += 8;
                }

                if (DeckOfCards[0] == "Eight of Spades")
                {
                    playerPoint += 8;
                }

                if (DeckOfCards[1] == "Eight of Spades")
                {
                    playerPoint += 8;
                }

                if (DeckOfCards[0] == "Nine of Diamonds")
                {
                    playerPoint += 9;
                }

                if (DeckOfCards[1] == "Nine of Diamonds")
                {
                    playerPoint += 9;
                }

                if (DeckOfCards[0] == "Nine of Spades")
                {
                    playerPoint += 9;
                }

                if (DeckOfCards[1] == "Nine of Spades")
                {
                    playerPoint += 9;
                }

                if (DeckOfCards[0] == "Nine of Hearts")
                {
                    playerPoint += 9;
                }

                if (DeckOfCards[1] == "Nine of Hearts")
                {
                    playerPoint += 9;
                }

                if (DeckOfCards[0] == "Nine of Spades")
                {
                    playerPoint += 9;
                }

                if (DeckOfCards[1] == "Nine of Spades")
                {
                    playerPoint += 9;
                }

                if (DeckOfCards[0] == "Ten of Diamonds")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "Ten of Diamonds")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "Ten of Spades")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "Ten of Spades")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "Ten of Hearts")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "Ten of Hearts")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "Ten of Clubs")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "Ten of Clubs")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "Jack of Diamonds")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "Jack of Diamonds")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "Jack of Spades")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "Jack of Spades")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "Jack of Hearts")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "Jack of Hearts")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "Jack of Clubs")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "Jack of Clubs")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "Queen of Diamonds")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "Queen of Diamonds")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "Queen of Space")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "Queen of Spades")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "Queen of Hearts")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "Queen of Hearts")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "Queen of Clubs")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "Queen of Clubs")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "King of Diamonds")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "King of Diamonds")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "King of Spades")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "King of Spades")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "King of Hearts")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "King of Hearts")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[0] == "King of Clubs")
                {
                    playerPoint += 10;
                }

                if (DeckOfCards[1] == "King of Clubs")
                {
                    playerPoint += 10;
                }

                std::cout << "\nPlayer Points: " << playerPoint;

                if (playerPoint < 21)
                {
                    switch (choice)
                    {
                    case 0:
                        std::cout << "Player's Cards: \n" << DeckOfCards[0] << '\n' << DeckOfCards[1] << '\n' << DeckOfCards[2];

                        if (DeckOfCards[0] == "Ace of Diamonds")
                        {
                            std::cout << "\nIs the Ace worht 1 point or 11?\n0. 1\n1. 11";
                            std::cin >> choice;

                            switch (choice)
                            {
                            case 0:
                                playerPoint++;
                                break;

                            case 1:
                                playerPoint += 11;
                                break;
                            }
                        }


                        if (DeckOfCards[1] == "Ace of Diamonds")
                        {
                            std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                            std::cin >> choice;

                            switch (choice)
                            {
                            case 0:
                                playerPoint++;
                                break;
                            case 1:
                                playerPoint += 11;
                                break;
                            }
                        }

                        if (DeckOfCards[0] == "Ace of Spades")
                        {
                            std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                            std::cin >> choice;

                            switch (choice)
                            {
                            case 0:
                                playerPoint++;
                                break;
                            case 1:
                                playerPoint += 11;
                                break;
                            }
                        }

                        if (DeckOfCards[1] == "Ace of Spades")
                        {
                            std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                            std::cin >> choice;

                            switch (choice)
                            {
                            case 0:
                                playerPoint++;
                                break;
                            case 1:
                                playerPoint += 11;
                                break;
                            }
                        }

                        if (DeckOfCards[0] == "Ace of Hearts")
                        {
                            std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                            std::cin >> choice;

                            switch (choice)
                            {
                            case 0:
                                playerPoint++;
                                break;
                            case 1:
                                playerPoint += 11;
                                break;
                            }
                        }

                        if (DeckOfCards[1] == "Ace of Hearts")
                        {
                            std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                            std::cin >> choice;

                            switch (choice)
                            {
                            case 0:
                                playerPoint++;
                                break;
                            case 1:
                                playerPoint += 11;
                                break;
                            }
                        }

                        if (DeckOfCards[0] == "Ace of Clubs")
                        {
                            std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                            std::cin >> choice;

                            switch (choice)
                            {
                            case 0:
                                playerPoint++;
                                break;
                            case 1:
                                playerPoint += 11;
                                break;
                            }
                        }

                        if (DeckOfCards[1] == "Ace of Clubs")
                        {
                            std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                            std::cin >> choice;

                            switch (choice)
                            {
                            case 0:
                                playerPoint++;
                                break;
                            case 1:
                                playerPoint += 11;
                                break;
                            }
                        }

                        if (DeckOfCards[0] == "Two of Diamonds")
                        {
                            playerPoint += 2;
                        }

                        if (DeckOfCards[1] == "Two of Diamonds")
                        {
                            playerPoint += 2;
                        }

                        if (DeckOfCards[0] == "Two of Spades")
                        {
                            playerPoint += 2;
                        }

                        if (DeckOfCards[1] == "Two of Spades")
                        {
                            playerPoint += 2;
                        }

                        if (DeckOfCards[0] == "Two of Hearts")
                        {
                            playerPoint += 2;
                        }

                        if (DeckOfCards[1] == "Two of Hearts")
                        {
                            playerPoint += 2;
                        }

                        if (DeckOfCards[0] == "Two of Clubs")
                        {
                            playerPoint += 2;
                        }

                        if (DeckOfCards[1] == "Two of Clubs")
                        {
                            playerPoint += 2;
                        }

                        if (DeckOfCards[0] == "Three of Diamonds")
                        {
                            playerPoint += 3;
                        }

                        if (DeckOfCards[1] == "Three of Diamonds")
                        {
                            playerPoint += 3;
                        }

                        if (DeckOfCards[0] == "Three of Spades")
                        {
                            playerPoint += 3;
                        }

                        if (DeckOfCards[1] == "Three of Spades")
                        {
                            playerPoint += 3;
                        }

                        if (DeckOfCards[0] == "Three of Hearts")
                        {
                            playerPoint += 3;
                        }

                        if (DeckOfCards[1] == "Three of Hearts")
                        {
                            playerPoint += 3;
                        }

                        if (DeckOfCards[0] == "Three of Clubs")
                        {
                            playerPoint += 3;
                        }

                        if (DeckOfCards[1] == "Three of Clubs")
                        {
                            playerPoint += 3;
                        }

                        if (DeckOfCards[0] == "Four of Diamonds")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[1] == "Four of Diamonds")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[0] == "Four of Spades")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[1] == "Four of Spades")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[0] == "Four of Hearts")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[1] == "Four of Hearts")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[0] == "Four of Clubs")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[1] == "Four of Clubs")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[0] == "Four of Diamonds")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[1] == "Four of Diamonds")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[0] == "Four of Spades")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[1] == "Four of Spades")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[0] == "Four of Hearts")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[1] == "Four of Hearts")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[0] == "Four of Clubs")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[1] == "Four of Clubs")
                        {
                            playerPoint += 4;
                        }

                        if (DeckOfCards[0] == "Six of Diamonds")
                        {
                            playerPoint += 6;
                        }

                        if (DeckOfCards[1] == "Six of Diamonds")
                        {
                            playerPoint += 6;
                        }

                        if (DeckOfCards[0] == "Six of Spades")
                        {
                            playerPoint += 6;
                        }

                        if (DeckOfCards[1] == "Six of Spades")
                        {
                            playerPoint += 6;
                        }

                        if (DeckOfCards[0] == "Six of Hearts")
                        {
                            playerPoint += 6;
                        }

                        if (DeckOfCards[1] == "Six of Hearts")
                        {
                            playerPoint += 6;
                        }

                        if (DeckOfCards[0] == "Six of Clubs")
                        {
                            playerPoint += 6;
                        }

                        if (DeckOfCards[1] == "Six of Clubs")
                        {
                            playerPoint += 6;
                        }

                        if (DeckOfCards[0] == "Seven of Diamonds")
                        {
                            playerPoint += 7;
                        }

                        if (DeckOfCards[1] == "Seven of Diamonds")
                        {
                            playerPoint += 7;
                        }

                        if (DeckOfCards[0] == "Seven of Spades")
                        {
                            playerPoint += 7;
                        }

                        if (DeckOfCards[1] == "Seven of Spades")
                        {
                            playerPoint += 7;
                        }

                        if (DeckOfCards[0] == "Seven of Hearts")
                        {
                            playerPoint += 7;
                        }

                        if (DeckOfCards[1] == "Seven of Hearts")
                        {
                            playerPoint += 7;
                        }

                        if (DeckOfCards[0] == "Seven of Clubs")
                        {
                            playerPoint += 7;
                        }

                        if (DeckOfCards[1] == "Seven of Clubs")
                        {
                            playerPoint += 7;
                        }

                        if (DeckOfCards[0] == "Eight of Diamonds")
                        {
                            playerPoint += 8;
                        }

                        if (DeckOfCards[1] == "Eight of Diamonds")
                        {
                            playerPoint += 8;
                        }

                        if (DeckOfCards[0] == "Eight of Spades")
                        {
                            playerPoint += 8;
                        }

                        if (DeckOfCards[1] == "Eight of Spades")
                        {
                            playerPoint += 8;
                        }

                        if (DeckOfCards[0] == "Eight of Hearts")
                        {
                            playerPoint += 8;
                        }

                        if (DeckOfCards[1] == "Eight of Hearts")
                        {
                            playerPoint += 8;
                        }

                        if (DeckOfCards[0] == "Eight of Spades")
                        {
                            playerPoint += 8;
                        }

                        if (DeckOfCards[1] == "Eight of Spades")
                        {
                            playerPoint += 8;
                        }

                        if (DeckOfCards[0] == "Nine of Diamonds")
                        {
                            playerPoint += 9;
                        }

                        if (DeckOfCards[1] == "Nine of Diamonds")
                        {
                            playerPoint += 9;
                        }

                        if (DeckOfCards[0] == "Nine of Spades")
                        {
                            playerPoint += 9;
                        }

                        if (DeckOfCards[1] == "Nine of Spades")
                        {
                            playerPoint += 9;
                        }

                        if (DeckOfCards[0] == "Nine of Hearts")
                        {
                            playerPoint += 9;
                        }

                        if (DeckOfCards[1] == "Nine of Hearts")
                        {
                            playerPoint += 9;
                        }

                        if (DeckOfCards[0] == "Nine of Spades")
                        {
                            playerPoint += 9;
                        }

                        if (DeckOfCards[1] == "Nine of Spades")
                        {
                            playerPoint += 9;
                        }

                        if (DeckOfCards[0] == "Ten of Diamonds")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "Ten of Diamonds")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "Ten of Spades")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "Ten of Spades")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "Ten of Hearts")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "Ten of Hearts")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "Ten of Clubs")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "Ten of Clubs")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "Jack of Diamonds")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "Jack of Diamonds")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "Jack of Spades")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "Jack of Spades")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "Jack of Hearts")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "Jack of Hearts")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "Jack of Clubs")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "Jack of Clubs")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "Queen of Diamonds")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "Queen of Diamonds")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "Queen of Space")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "Queen of Spades")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "Queen of Hearts")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "Queen of Hearts")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "Queen of Clubs")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "Queen of Clubs")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "King of Diamonds")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "King of Diamonds")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "King of Spades")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "King of Spades")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "King of Hearts")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "King of Hearts")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[0] == "King of Clubs")
                        {
                            playerPoint += 10;
                        }

                        if (DeckOfCards[1] == "King of Clubs")
                        {
                            playerPoint += 10;
                        }

                        std::cout << "Player Points: " << playerPoint;

                        break;

                    case 1:

                        break;
                    }

                    std::cout << "\n\nDealer's Cards: \n" << DeckOfCards[51] << '\n' << DeckOfCards[50];

                    if (DeckOfCards[51] == "Ace of Diamonds")
                    {
                        std::cout << "\nIs the Ace worht 1 point or 11?\n0. 1\n1. 11";
                        std::cin >> choice;

                        switch (choice)
                        {
                        case 0:
                            dealerPoint++;
                            break;
                        case 1:
                            dealerPoint += 11;
                            break;
                        }
                    }

                    if (DeckOfCards[50] == "Ace of Diamonds")
                    {
                        std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                        std::cin >> choice;

                        switch (choice)
                        {
                        case 0:
                            dealerPoint++;
                            break;
                        case 1:
                            dealerPoint += 11;
                            break;
                        }
                    }

                    if (DeckOfCards[51] == "Ace of Spades")
                    {
                        std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                        std::cin >> choice;

                        switch (choice)
                        {
                        case 0:
                            dealerPoint++;
                            break;
                        case 1:
                            dealerPoint += 11;
                            break;
                        }
                    }

                    if (DeckOfCards[50] == "Ace of Spades")
                    {
                        std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                        std::cin >> choice;

                        switch (choice)
                        {
                        case 0:
                            dealerPoint++;
                            break;
                        case 1:
                            dealerPoint += 11;
                            break;
                        }
                    }

                    if (DeckOfCards[51] == "Ace of Hearts")
                    {
                        std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                        std::cin >> choice;

                        switch (choice)
                        {
                        case 0:
                            dealerPoint++;
                            break;
                        case 1:
                            dealerPoint += 11;
                            break;
                        }
                    }

                    if (DeckOfCards[50] == "Ace of Hearts")
                    {
                        std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                        std::cin >> choice;

                        switch (choice)
                        {
                        case 0:
                            dealerPoint++;
                            break;
                        case 1:
                            dealerPoint += 11;
                            break;
                        }
                    }

                    if (DeckOfCards[51] == "Ace of Clubs")
                    {
                        std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                        std::cin >> choice;

                        switch (choice)
                        {
                        case 0:
                            dealerPoint++;
                            break;
                        case 1:
                            dealerPoint += 11;
                            break;
                        }
                    }

                    if (DeckOfCards[50] == "Ace of Clubs")
                    {
                        std::cout << "\nIs the Ace worth 1 point or 11?\n0. 1\n1. 11";
                        std::cin >> choice;

                        switch (choice)
                        {
                        case 0:
                            dealerPoint++;
                            break;
                        case 1:
                            dealerPoint += 11;
                            break;
                        }
                    }



                    if (DeckOfCards[51] == "Two of Diamonds")
                    {
                        dealerPoint += 2;
                    }

                    if (DeckOfCards[50] == "Two of Diamonds")
                    {
                        dealerPoint += 2;
                    }

                    if (DeckOfCards[51] == "Two of Spades")
                    {
                        dealerPoint += 2;
                    }

                    if (DeckOfCards[50] == "Two of Spades")
                    {
                        dealerPoint += 2;
                    }

                    if (DeckOfCards[51] == "Two of Hearts")
                    {
                        dealerPoint += 2;
                    }

                    if (DeckOfCards[50] == "Two of Hearts")
                    {
                        dealerPoint += 2;
                    }

                    if (DeckOfCards[51] == "Two of Clubs")
                    {
                        dealerPoint += 2;
                    }

                    if (DeckOfCards[50] == "Two of Clubs")
                    {
                        dealerPoint += 2;
                    }



                    if (DeckOfCards[51] == "Three of Diamonds")
                    {
                        dealerPoint += 3;
                    }

                    if (DeckOfCards[50] == "Three of Diamonds")
                    {
                        dealerPoint += 3;
                    }

                    if (DeckOfCards[51] == "Three of Spades")
                    {
                        dealerPoint += 3;
                    }

                    if (DeckOfCards[50] == "Three of Spades")
                    {
                        dealerPoint += 3;
                    }

                    if (DeckOfCards[51] == "Three of Hearts")
                    {
                        dealerPoint += 3;
                    }

                    if (DeckOfCards[50] == "Three of Hearts")
                    {
                        dealerPoint += 3;
                    }

                    if (DeckOfCards[51] == "Three of Clubs")
                    {
                        dealerPoint += 3;
                    }

                    if (DeckOfCards[50] == "Three of Clubs")
                    {
                        dealerPoint += 3;
                    }



                    if (DeckOfCards[51] == "Four of Diamonds")
                    {
                        dealerPoint += 4;
                    }

                    if (DeckOfCards[50] == "Four of Diamonds")
                    {
                        dealerPoint += 4;
                    }

                    if (DeckOfCards[51] == "Four of Spades")
                    {
                        dealerPoint += 4;
                    }

                    if (DeckOfCards[50] == "Four of Spades")
                    {
                        dealerPoint += 4;
                    }

                    if (DeckOfCards[51] == "Four of Hearts")
                    {
                        dealerPoint += 4;
                    }

                    if (DeckOfCards[50] == "Four of Hearts")
                    {
                        dealerPoint += 4;
                    }

                    if (DeckOfCards[51] == "Four of Clubs")
                    {
                        dealerPoint += 4;
                    }

                    if (DeckOfCards[50] == "Four of Clubs")
                    {
                        dealerPoint += 4;
                    }



                    if (DeckOfCards[51] == "Five of Diamonds")
                    {
                        dealerPoint += 5;
                    }

                    if (DeckOfCards[50] == "Five of Diamonds")
                    {
                        dealerPoint += 5;
                    }

                    if (DeckOfCards[51] == "Five of Spades")
                    {
                        dealerPoint += 5;
                    }

                    if (DeckOfCards[50] == "Five of Spades")
                    {
                        dealerPoint += 5;
                    }

                    if (DeckOfCards[51] == "Five of Hearts")
                    {
                        dealerPoint += 5;
                    }

                    if (DeckOfCards[50] == "Five of Hearts")
                    {
                        dealerPoint += 5;
                    }

                    if (DeckOfCards[51] == "Five of Spades")
                    {
                        dealerPoint += 5;
                    }

                    if (DeckOfCards[50] == "Five of Spades")
                    {
                        dealerPoint += 5;
                    }



                    if (DeckOfCards[51] == "Six of Diamonds")
                    {
                        dealerPoint += 6;
                    }

                    if (DeckOfCards[50] == "Six of Diamonds")
                    {
                        dealerPoint += 6;
                    }

                    if (DeckOfCards[51] == "Six of Spades")
                    {
                        dealerPoint += 6;
                    }

                    if (DeckOfCards[50] == "Six of Spades")
                    {
                        dealerPoint += 6;
                    }

                    if (DeckOfCards[51] == "Six of Hearts")
                    {
                        dealerPoint += 6;
                    }

                    if (DeckOfCards[50] == "Six of Hearts")
                    {
                        dealerPoint += 6;
                    }

                    if (DeckOfCards[51] == "Six of Clubs")
                    {
                        dealerPoint += 6;
                    }

                    if (DeckOfCards[50] == "Six of Clubs")
                    {
                        dealerPoint += 6;
                    }


                    if (DeckOfCards[51] == "Seven of Diamonds")
                    {
                        dealerPoint += 7;
                    }

                    if (DeckOfCards[50] == "Seven of Diamonds")
                    {
                        dealerPoint += 7;
                    }

                    if (DeckOfCards[51] == "Seven of Spades")
                    {
                        dealerPoint += 7;
                    }

                    if (DeckOfCards[50] == "Seven of Spades")
                    {
                        dealerPoint += 7;
                    }

                    if (DeckOfCards[51] == "Seven of Hearts")
                    {
                        dealerPoint += 7;
                    }

                    if (DeckOfCards[50] == "Seven of Hearts")
                    {
                        dealerPoint += 7;
                    }

                    if (DeckOfCards[51] == "Seven of Clubs")
                    {
                        dealerPoint += 7;
                    }

                    if (DeckOfCards[50] == "Seven of Clubs")
                    {
                        dealerPoint += 7;
                    }



                    if (DeckOfCards[51] == "Eight of Diamonds")
                    {
                        dealerPoint += 8;
                    }

                    if (DeckOfCards[50] == "Eight of Diamonds")
                    {
                        dealerPoint += 8;
                    }

                    if (DeckOfCards[51] == "Eight of Spades")
                    {
                        dealerPoint += 8;
                    }

                    if (DeckOfCards[50] == "Eight of Spades")
                    {
                        dealerPoint += 8;
                    }

                    if (DeckOfCards[51] == "Eight of Hearts")
                    {
                        dealerPoint += 8;
                    }

                    if (DeckOfCards[50] == "Eight of Hearts")
                    {
                        dealerPoint += 8;
                    }

                    if (DeckOfCards[51] == "Eight of Spades")
                    {
                        dealerPoint += 8;
                    }

                    if (DeckOfCards[50] == "Eight of Spades")
                    {
                        dealerPoint += 8;
                    }



                    if (DeckOfCards[51] == "Nine of Diamonds")
                    {
                        dealerPoint += 9;
                    }

                    if (DeckOfCards[50] == "Nine of Diamonds")
                    {
                        dealerPoint += 9;
                    }

                    if (DeckOfCards[51] == "Nine of Spades")
                    {
                        dealerPoint += 9;
                    }

                    if (DeckOfCards[50] == "Nine of Spades")
                    {
                        dealerPoint += 9;
                    }

                    if (DeckOfCards[51] == "Nine of Hearts")
                    {
                        dealerPoint += 9;
                    }

                    if (DeckOfCards[50] == "Nine of Hearts")
                    {
                        dealerPoint += 9;
                    }

                    if (DeckOfCards[51] == "Nine of Spades")
                    {
                        dealerPoint += 9;
                    }

                    if (DeckOfCards[50] == "Nine of Spades")
                    {
                        dealerPoint += 9;
                    }



                    if (DeckOfCards[51] == "Ten of Diamonds")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "Ten of Diamonds")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[51] == "Ten of Spades")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "Ten of Spades")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[51] == "Ten of Hearts")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "Ten of Hearts")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[51] == "Ten of Clubs")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "Ten of Clubs")
                    {
                        dealerPoint += 10;
                    }



                    if (DeckOfCards[51] == "Jack of Diamonds")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "Jack of Diamonds")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[51] == "Jack of Spades")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "Jack of Spades")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[51] == "Jack of Hearts")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "Jack of Hearts")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[51] == "Jack of Clubs")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "Jack of Clubs")
                    {
                        dealerPoint += 10;
                    }



                    if (DeckOfCards[51] == "Queen of Diamonds")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "Queen of Diamonds")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[51] == "Queen of Space")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "Queen of Spades")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[51] == "Queen of Hearts")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "Queen of Hearts")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[51] == "Queen of Clubs")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "Queen of Clubs")
                    {
                        dealerPoint += 10;
                    }


                    if (DeckOfCards[51] == "King of Diamonds")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "King of Diamonds")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[51] == "King of Spades")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "King of Spades")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[51] == "King of Hearts")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "King of Hearts")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[51] == "King of Clubs")
                    {
                        dealerPoint += 10;
                    }

                    if (DeckOfCards[50] == "King of Clubs")
                    {
                        dealerPoint += 10;
                    }

                    std::cout << "\n\nDealer's Points: " << dealerPoint;

                }

                std::cout << "\n\nDealer's Points: " << dealerPoint << "player's Points: " << playerPoint;

                if (playerPoint < dealerPoint)
                {
                    if (playerPoint > 21)
                    {
                        std::cout << "Player Loss, Dealer Win";
                        dealerWins++;
                    }
                    else
                    {
                        std::cout << "Player Win, Dealer Loss";
                        playerWins++;
                    }

                }
                else if (playerPoint > dealerWins)
                {
                    if (playerPoint > 21)
                    {
                        std::cout << "Player Loss, Dealer Win";
                        dealerWins++;
                    }
                    else
                    {
                        std::cout << "Player Win, Dealer Loss";
                        playerWins++;
                    }
                }

                

                turn++;

                std::cout << "Turn: " << turn << "Player Wins: " << playerWins << "Dealer Wins: " << dealerWins << "Ties: " << ties;

            }

            break;
        }

        std::cout << "\n\nThank you for playing!";

    } while (choice != 0);

}


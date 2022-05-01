#include <iostream>
#include <sstream>
#include <string>
//#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
//#include <bits/stdc++.h>

//enum Face {Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};
//enum Suit {Diamonds, Spades, Hearts, Clubs};

using namespace std;

int playerWins = 0;
int dealerWins = 0;
int ties = 0;

int playerScore;
int dealerScore;

int point;



int main(void)
{

	//Player choice to start game or exit
	int choice;

	//vector<string> Face_vec;

	std::string Face[13] =
	{
		"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"
	};

	int FaceWorth[13] =
	{
		1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10
	};

	std::string Suit[4] =
	{
		"Diamonds", "Spades", "Hearts", "Clubs"
	};

	

	int RandIndexFace = rand() % 13;

	int RandIndexSuit = rand() % 4;

	do
	{
		std::cout << "0.Rules\n" << std::endl << "1.Play Game\n" << std::endl << "2.Exit\n";
		std::cin >> choice;

		switch (choice)
		{
		case 0:
			std::cout << "Here are the game rules.\n";
			std::cout << "1.Aces can either be 1 or 11 points.\n2.Dealer wins ties unless the plater has blackjack."; 
			break;
		case 1:
			std::cout << "Thank you for playing.\n";
			
			//Shuffle array

			
			

			//Pull a single card
			std::cout <<"Player Cards: \n" << Face[RandIndexFace] << " of " << Suit[RandIndexSuit] << '\n';
			std::cout << Face[RandIndexFace] << " of " << Suit[RandIndexSuit];

			

			//if this card appears this is how many points it is worth
			if (Face[0] == "Ace")
			{
				std::cout << "Choose if you want the Ace to be worth one point or 11.\n0. 1\n1. 11";
				std::cin >> choice;

				switch (choice)
				{
					case 0:
						point++;
						break;
					case 1:
						point += 11;
						break;
				}
			}

			if (Face[1] == "Two")
			{
				point += 2;
			}

			if (Face[2] == "Three")
			{
				point += 3;
			}

			if (Face[3] == "Four")
			{
				point += 4;
			}

			if (Face[5] == "Five")
			{
				point += 5;
			}

			if (Face[6] == "Six")
			{
				point += 6;
			}

			if (Face[7] == "Seven")
			{
				point += 7;
			}

			if (Face[8] == "Eight")
			{
				point += 8;
			}

			if (Face[9] == "Nine")
			{
				point += 9;
			}

			if (Face[10] == "Ten")
			{
				point += 10;
			}

			if (Face[11] == "Jack")
			{
				point += 10;
			}

			if (Face[12] == "Queen")
			{
				point += 10;
			}

			if (Face[13] == "King")
			{
				point += 10;
			}

			std::cout << "Total Points: " << point;

			//Face face = Face(rand() % 10);
			//Suit suit = Suit(rand() % 10);

			//std::cout << face << " of " << suit;

			//if plaScore is less than or equal to 21
			if (playerScore <= 21)
			{
				//if dealerScore is less than or equal to 21
				if (dealerScore <= 21)
				{
					//Neither the dealer nor the player have 21

					//if the players score is higher than the dealers than the player wins
					if (playerScore > dealerScore)
					{
						std::cout << "Player Wins.";
						playerWins++;
					}
					//if the player score and the dealer score is equal then they are both tied 
					else if (playerScore == dealerScore)
					{
						std::cout << "Tie";
						ties++;
					}
					//if the dealer score is higher than the players then the dealer wins
					else if (dealerScore > playerScore)
					{
						std::cout << "Dealer Wins";
						dealerWins++;
					}
				}
				else
				{
					//if the dealer is score is greater than or equal to 21 then the player wins
					std::cout << "Player Wins";
					playerWins++;
				}
			}
			else
			{
				//if player score is greater than or equal to 21 then the dealer wins

				if (dealerScore <= 21)
				{
					std::cout << "Dealer Wins";
					dealerWins++;
				}
				else
				{
					std::cout << "Dealer Wins";
					dealerWins++;
				}
			}

			std::cout << "Player Wins: " << playerScore << "Dealer Wins: " << dealerScore << "Ties: " << ties;


			break;
		case 2:
			std::cout << "Exit Game.\n";
			return 0; 
		}
	} while (choice != 0);

}
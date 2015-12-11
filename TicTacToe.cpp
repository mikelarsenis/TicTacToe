#include <iostream>

using namespace std;

bool turn = 1;
int xMove=1;
int oMove=1;
int winner = 0; //x-winner = 1, o-winner = 2, no-winner = 3

char r2[19] {' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ' };
char r3[19] {' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ' };
char r4[19] {' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ' };
char r5[19] {' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'};
char r6[19] {' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ' };
char r7[19] {' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ' };
char r8[19] {' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ' };
char r9[19] {' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-'};
char r10[19] {' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ' };
char r11[19] {' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ' };
char r12[19] {' ', ' ', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ', ' ', '|', ' ', ' ', ' ', ' ' };

//X-moves
void PrintX7()
{
	r2[3] = 'x';
	r2[5] = 'x';
	r3[4] = 'x';
	r4[3] = 'x';
	r4[5] = 'x';
	turn = 0;  //set the turn to player 2
}
void PrintX8()
{
	r2[9] = 'x';
	r2[11] = 'x';
	r3[10] = 'x';
	r4[9] = 'x';
	r4[11] = 'x';
	turn = 0;  //set turn to player 2
}
void PrintX9()
{
	r2[15] = 'x';
	r2[17] = 'x';
	r3[16] = 'x';
	r4[15] = 'x';
	r4[17] = 'x';
	turn = 0;  //set turn to player 2
}
void PrintX4()
{
	r6[3] = 'x';
	r6[5] = 'x';
	r7[4] = 'x';
	r8[3] = 'x';
	r8[5] = 'x';
	turn = 0;  //set turn to player 2
}
void PrintX5()
{
	r6[9] = 'x';
	r6[11] = 'x';
	r7[10] = 'x';
	r8[9] = 'x';
	r8[11] = 'x';
	turn = 0;  //set turn to player 2
}
void PrintX6()
{
	r6[15] = 'x';
	r6[17] = 'x';
	r7[16] = 'x';
	r8[15] = 'x';
	r8[17] = 'x';
	turn = 0;  //set turn to player 2
}
void PrintX1()
{
	r10[3] = 'x';
	r10[5] = 'x';
	r11[4] = 'x';
	r12[3] = 'x';
	r12[5] = 'x';
	turn = 0;  //set the turn to player 2
}
void PrintX2()
{
	r10[9] = 'x';
	r10[11] = 'x';
	r11[10] = 'x';
	r12[9] = 'x';
	r12[11] = 'x';
	turn = 0;  //set turn to player 2
}
void PrintX3()
{
	r10[15] = 'x';
	r10[17] = 'x';
	r11[16] = 'x';
	r12[15] = 'x';
	r12[17] = 'x';
	turn = 0;  //set turn to player 2
}

//checks to make sure space is blank. If true=blank.
bool Check7() 
{
	if (r2[3] == ' ')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Check8()
{
	if (r2[9] == ' ')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Check9()
{
	if (r2[15] == ' ')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Check4()
{
	if (r6[3] == ' ')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Check5()
{
	if (r6[9] == ' ')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Check6()
{
	if (r6[15] == ' ')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Check1()
{
	if (r10[3] == ' ')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Check2()
{
	if (r10[9] == ' ')
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Check3()
{
	if (r10[15] == ' ')
	{
		return true;
	}
	else
	{
		return false;
	}
}

//O-moves
void PrintO7()
{
	r2[3] = '0';
	r2[4] = '0';
	r2[5] = '0';
	r3[3] = '0';
	r3[5] = '0';
	r4[3] = '0';
	r4[4] = '0';
	r4[5] = '0';
	turn = 1;  //set the turn to player 1
}
void PrintO8()
{
	r2[9] = '0';
	r2[10] = '0';
	r2[11] = '0';
	r3[9] = '0';
	r3[11] = '0';
	r4[9] = '0';
	r4[10] = '0';
	r4[11] = '0';
	turn = 1;  //set turn to player 1
}
void PrintO9()
{
	r2[15] = '0';
	r2[16] = '0';
	r2[17] = '0';
	r3[15] = '0';
	r3[17] = '0';
	r4[15] = '0';
	r4[16] = '0';
	r4[17] = '0';
	turn = 1;  //set turn to player 1
}
void PrintO4()
{
	r6[3] = '0';
	r6[4] = '0';
	r6[5] = '0';
	r7[3] = '0';
	r7[5] = '0';
	r8[3] = '0';
	r8[4] = '0';
	r8[5] = '0';
	turn = 1;  //set turn to player 1
}
void PrintO5()
{
	r6[9] = '0';
	r6[10] = '0';
	r6[11] = '0';
	r7[9] = '0';
	r7[11] = '0';
	r8[9] = '0';
	r8[9] = '0';
	r8[10] = '0';
	r8[11] = '0';
	turn = 1;  //set turn to player 1
}
void PrintO6()
{
	r6[15] = '0';
	r6[16] = '0';
	r6[17] = '0';
	r7[15] = '0';
	r7[17] = '0';
	r8[15] = '0';
	r8[16] = '0';
	r8[17] = '0';
	turn = 1;  //set turn to player 1
}
void PrintO1()
{
	r10[3] = '0';
	r10[4] = '0';
	r10[5] = '0';
	r11[3] = '0';
	r11[5] = '0';
	r12[3] = '0';
	r12[4] = '0';
	r12[5] = '0';
	turn = 1;  //set the turn to player 1
}
void PrintO2()
{
	r10[9] = '0';
	r10[10] = '0';
	r10[11] = '0';
	r11[9] = '0';
	r11[11] = '0';
	r12[9] = '0';
	r12[10] = '0';
	r12[11] = '0';
	turn = 1;  //set the turn to player 1
}
void PrintO3()
{
	r10[15] = '0';
	r10[16] = '0';
	r10[17] = '0';
	r11[15] = '0';
	r11[17] = '0';
	r12[15] = '0';
	r12[16] = '0';
	r12[17] = '0';
	turn = 1;  //set the turn to player 1
}

void getMove(bool t)
{
	if (t == 1)//xMove
	{
		cin >> xMove;
		//check for valid inpug
		while (xMove > 10 || xMove < 1)
		{
			cout << "Please make a valid selection.";
			cin >> xMove;
		}
	}
	if (t == 0)//oMove
	{
		cin >> oMove;
		while (oMove > 10 || oMove < 1)
		{
			cout << "Please make a valid selection.";
			cin >> oMove;
		}
	}
	else
	{
		cout << "There is a problem with getting the move";
	}
}

//Checks for a winner and set the winner variable. x=1 o=2
void CheckWinner() 
{
	//X win****
	//vertical win positions 1,4,7
	if (r2[3] == 'x' && r6[3] == 'x' && r10[3] == 'x')
	{
		winner = 1;
	}
	//vertical win positions 2,5,8
	else if (r2[9] == 'x' && r6[9] == 'x' && r10[9] == 'x')
	{
		winner = 1;
	}
	//vertical win positions 3,6,9
	else if (r2[15] == 'x' && r6[15] == 'x' && r10[15] == 'x')
	{
		winner = 1;
	}
	//horizontal win positions 1,2,3
	else if (r2[3] == 'x' && r2[9] == 'x' && r2[15] == 'x')
	{
		winner = 1;
	}
	//horizontal win positions 4,5,6
	else if (r6[3] == 'x' && r6[9] == 'x' && r6[15] == 'x')
	{
		winner = 1;
	}
	//horizontal win positions 7,8,9
	else if (r10[3] == 'x' && r10[9] == 'x' && r10[15] == 'x')
	{
		winner = 1;
	}
	//diagonal win positions 3,5,7
	else if (r10[3] == 'x' && r6[9] == 'x' && r2[15] == 'x')
	{
		winner = 1;
	}
	//diagonal win positions 1,5,9
	else if (r2[3] == 'x' && r6[9] == 'x' && r10[15] == 'x')
	{
		winner = 1;
	}

	//0 win****
	//vertical win positions 1,4,7
	else if (r2[3] == '0' && r6[3] == '0' && r10[3] == '0')
	{
		winner = 2;
	}
	//vertical win positions 2,5,8
	else if (r2[9] == '0' && r6[9] == '0' && r10[9] == '0')
	{
		winner = 2;
	}
	//vertical win positions 3,6,9
	else if (r2[15] == '0' && r6[15] == '0' && r10[15] == '0')
	{
		winner = 2;
	}
	//horizontal win positions 1,2,3
	else if (r2[3] == '0' && r2[9] == '0' && r2[15] == '0')
	{
		winner = 2;
	}
	//horizontal win positions 4,5,6
	else if (r6[3] == '0' && r6[9] == '0' && r6[15] == '0')
	{
		winner = 2;
	}
	//horizontal win positions 7,8,9
	else if (r10[3] == '0' && r10[9] == '0' && r10[15] == '0')
	{
		winner = 2;
	}
	//diagonal win positions 3,5,7
	else if (r10[3] == '0' && r6[9] == '0' && r2[15] == '0')
	{
		winner = 2;
	}
	//diagonal win positions 1,5,9
	else if (r2[3] == '0' && r6[9] == '0' && r10[15] == '0')
	{
		winner = 2;
	}
	//if all spaces are full there's no winner
	else if (r2[3] != ' ' && r2[9] != ' ' && r2[15] != ' ' && r6[3] != ' ' && r6[9] != ' ' && r6[15] != ' ' && r10[3] != ' ' && r10[9] != '  '&& r10[15] != ' ')
	{
		winner = 3;
	}
} //end CheckWinner()

//Prints the position guide for the instructions
void PrintGuide() 
{
	char guideTitle[] {"Position guide:"};
	char guideR1[] {" 7|8|9"};
	char guideR2[] {"-------"};
	char guideR3[] {" 4|5|6"};
	char guideR4[] {" 1|2|3"};

	cout << "             " << guideR1 << endl;
	cout << "             " << guideR2 << endl;
	cout << "             " << guideR3 << endl;
	cout << "             " << guideR2 << endl;
	cout << "             " << guideR4 << endl;
}

//Prints the game board and position guide. Automatically updated.
void Print(bool t)  
{
	char guideTitle[] {"Position guide:"};
	char guideR1[] {" 7|8|9"};
	char guideR2[] {"-------"};
	char guideR3[] {" 4|5|6"};
	char guideR4[] {" 1|2|3"};

	if (t == 1) // turn is player 1
	{
		system("cls");
		cout << endl << "                            " << guideTitle << endl << r2 << "              " << guideR1 << endl;
		cout << r3 << "              " << guideR2 << endl << r4 << "              " << guideR3 << endl;
		cout << r5 << "             " << guideR2 << endl << r6 << "              " << guideR4 << endl;
		cout << r7 << endl << r8 << endl << r9 << endl << r10 << endl << r11 << endl << r12 << endl << endl;
		if (winner == 1)
		{
			cout << "Player 1 wins!!\n\n";
			system("pause");
			exit(0);
		}
		else if (winner == 2)
		{
			cout << "Player 2 wins!!\n\n";
			system("pause");
			exit(0);
			
		}
		else if (winner == 3)
		{
			cout << "You guys are too good. No winner...\n\n";
			system("pause");
			exit(0);
		}
		else
		{
			cout << " Alright PLAYER 1, where do you want to go? ";
			getMove(t);
			cout << endl;
			while (xMove > 9 || xMove < 0)
			{
				cout << "Please enter a position between 1 and 9... ";
				getMove(t);
			}

			//check to see if space is blank
			while (xMove == 1 && !Check1())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (xMove == 2 && !Check2())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (xMove == 3 && !Check3())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (xMove == 4 && !Check4())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (xMove == 5 && !Check5())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (xMove == 6 && !Check6())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (xMove == 7 && !Check7())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (xMove == 8 && !Check8())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (xMove == 9 && !Check9())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
		}
	} // end if

	if (t == 0) // turn is player 2
	{
		system("cls");
		cout << endl << "                            " << guideTitle << endl << r2 << "              " << guideR1 << endl;
		cout << r3 << "              " << guideR2 << endl << r4 << "              " << guideR3 << endl;
		cout << r5 << "             " << guideR2 << endl << r6 << "              " << guideR4 << endl;
		cout << r7 << endl << r8 << endl << r9 << endl << r10 << endl << r11 << endl << r12 << endl << endl;
		if (winner == 1)
		{
			cout << "Player 1 wins!!\n\n";
			system("pause");
			exit(0);
		}
		else if (winner == 2)
		{
			cout << "Player 2 wins!!\n\n";
			system("pause");
			exit(0);
			
		}
		else if (winner == 3) //There is no winner
		{
			cout << "You guys are too good. No winner.\n\n";
			system("pause");
			exit(0);
		}
		else
		{
			cout << " Alright PLAYER 2, where do you want to go? ";
			getMove(t);
			cout << endl;
			while (oMove > 9 || oMove < 0)
			{
				cout << "\nPlease enter a position between 1 and 9... ";
				getMove(t);
			}

			//check to see if space is blank
			while (oMove == 1 && !Check1())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (oMove == 2 && !Check2())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (oMove == 3 && !Check3())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (oMove == 4 && !Check4())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (oMove == 5 && !Check5())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (oMove == 6 && !Check6())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (oMove == 7 && !Check7())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (oMove == 8 && !Check8())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
			while (oMove == 9 && !Check9())
			{
				cout << " That space is not available. Make another selection. ";
				getMove(t);
			}
		}
	} //end if

} //end Print()


int main()
{
	{	//instruction scope
		int instructions = 0;

		//ask user if they want to view instructions
		cout << "********Welcome to Tic-Tac-Toe********\n\n If this is your first time playing\n press 1 for instruction on how to\n play, otherwise press 0 to get playing.\n";
		cin >> instructions;

		if (instructions == 1)
		{
			system("cls");
			cout << "\n Below is a chart showing the positions\n  on the tic-tac-toe grid where you\n  are able to make a move." << endl << endl;
			PrintGuide();
			cout << "\n If you wanted to make your move to\n  the top left position of the grid\n  you would enter the number 1." << endl << endl;
			cout << "\n If you wanted to make your move to\n  the center position of the grid you\n  would enter the number 5, etc." << endl << endl;
			system("pause");
		}
	}  //end instruction scope

	while (xMove!=0 && oMove!=0)
	{
		system("cls");
		CheckWinner();
		Print(turn);
		if (turn == 1)  //player one's turn
		{
			if (xMove == 1 && (winner!=1||winner!=2)) //if player 1 entered position 1 (mark with x)
			{ 
				PrintX1(); 
			}

			if (xMove == 2) //if player 1 entered position 2 (mark with x)
			{
				PrintX2();
			}

			if (xMove == 3) //if player 1 entered position 3 (mark with x)
			{
				PrintX3();
			}

			if (xMove == 4) //if player 1 entered position 4 (mark with x)
			{
				PrintX4();
			}

			if (xMove == 5) //if player 1 entered position 5 (mark with x)
			{
				PrintX5();
			}

			if (xMove == 6) //if player 1 entered position 6 (mark with x)
			{
				PrintX6();
			}

			if (xMove == 7) //if player 1 entered position 1 (mark with x)
			{
				PrintX7();
			}

			if (xMove == 8) //if player 1 entered position 2 (mark with x)
			{
				PrintX8();
			}

			if (xMove == 9) //if player 1 entered position 3 (mark with x)
			{
				PrintX9();
			}
			
		} //end if player 1
		CheckWinner();
		Print(turn);
		if (turn == 0 && (winner!=1||winner!=2))  //player two's turn
		{
			if (oMove == 1) //if player 1 entered position 1 (mark with 0)
			{
				PrintO1();
			}

			if (oMove == 2) //if player 2 entered position 2 (mark with 0)
			{
				PrintO2();
			}

			if (oMove == 3) //if player 2 entered position 3 (mark with 0)
			{
				PrintO3();
			}

			if (oMove == 4) //if player 2 entered position 4 (mark with 0)
			{
				PrintO4();
			}

			if (oMove == 5) //if player 2 entered position 5 (mark with 0)
			{
				PrintO5();
			}

			if (oMove == 6) //if player 3 entered position 6 (mark with 0)
			{
				PrintO6();
			}

			if (oMove == 7) //if player 2 entered position 1 (mark with 0)
			{
				PrintO7();
			}

			if (oMove == 8) //if player 2 entered position 2 (mark with 0)
			{
				PrintO8();
			}

			if (oMove == 9) //if player 2 entered position 3 (mark with 0)
			{
				PrintO9();
			}
			CheckWinner();
		} //end if player 2
	} //end while

	//system("pause");
	return 0;
}
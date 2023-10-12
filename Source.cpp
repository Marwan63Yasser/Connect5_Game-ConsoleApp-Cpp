#include<iostream>
#include<string>
#include<Windows.h>
#include<ctime>
using namespace std;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); // For Coloring the Text
string player = " X ", mood;
string arraya[9][9] = { { "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   " }, { "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   " }, { "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   " }, { "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   " }, { "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   " }, { "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   " }, { "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   " }, { "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   " }, { "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   " } };
string number[9] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
string start; //who will start the play
string level; //Game level
int a = 9, b = 9, c = 9, d = 9, e = 9, f = 9, g = 9, q = 9; // final Shape
int t = 0; //toss

void final_shape()
{
	system("cls");
	SetConsoleTextAttribute(h, 3);
	cout << "\t\t\t_________________________________________________________________________\n";
	cout << "\t\t\t";
	for (int i = 0; i < 9; i++)
	{
		SetConsoleTextAttribute(h, 9);
		cout << "|   ";
		SetConsoleTextAttribute(h, 5);
		cout << number[i] << "   ";
	}
	SetConsoleTextAttribute(h, 9);
	cout << "|\n";
	SetConsoleTextAttribute(h, 8);
	cout << "\t\t\t_________________________________________________________________________\n";
	cout << "\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";

	for (int i = 0; i < 9; i++)
	{
		cout << "\t\t\t";
		cout << "*";
		for (int j = 0; j < 9; j++)
		{
			cout << "  ";
			if (arraya[i][j] == " X ")
			{
				SetConsoleTextAttribute(h, 68);

				if (a != 9 && b != 9)
				{
					if ((i == a && j == b) || (i == a && j == b + 1) || (i == a && j == b + 2) || (i == a && j == b + 3) || (i == a && j == b + 4))
						SetConsoleTextAttribute(h, 204);
					cout << arraya[i][j];
				}
				else if (c != 9 && d != 9)
				{
					if ((i == c && j == d) || (i == c + 1 && j == d) || (i == c + 2 && j == d) || (i == c + 3 && j == d) || (i == c + 4 && j == d))
						SetConsoleTextAttribute(h, 204);
					cout << arraya[i][j];
				}
				else if (e != 9 && f != 9)
				{
					if ((i == e && j == f) || (i == e - 1 && j == f + 1) || (i == e - 2 && j == f + 2) || (i == e - 3 && j == f + 3) || (i == e - 4 && j == f + 4))
						SetConsoleTextAttribute(h, 204);
					cout << arraya[i][j];
				}
				else if (g != 9 && q != 9)
				{
					if ((i == g && j == q) || (i == g - 1 && j == q - 1) || (i == g - 2 && j == q - 2) || (i == g - 3 && j == q - 3) || (i == g - 4 && j == q - 4))
						SetConsoleTextAttribute(h, 204);
					cout << arraya[i][j];
				}

			}
			else if (arraya[i][j] == " O ")
			{
				SetConsoleTextAttribute(h, 17);

				if (a != 9 && b != 9)
				{
					if ((i == a && j == b) || (i == a && j == b + 1) || (i == a && j == b + 2) || (i == a && j == b + 3) || (i == a && j == b + 4))
						SetConsoleTextAttribute(h, 153);
					cout << arraya[i][j];
				}
				else if (c != 9 && d != 9)
				{
					if ((i == c && j == d) || (i == c + 1 && j == d) || (i == c + 2 && j == d) || (i == c + 3 && j == d) || (i == c + 4 && j == d))
						SetConsoleTextAttribute(h, 153);
					cout << arraya[i][j];
				}
				else if (e != 9 && f != 9)
				{
					if ((i == e && j == f) || (i == e - 1 && j == f + 1) || (i == e - 2 && j == f + 2) || (i == e - 3 && j == f + 3) || (i == e - 4 && j == f + 4))
						SetConsoleTextAttribute(h, 153);
					cout << arraya[i][j];
				}
				else if (g != 9 && q != 9)
				{
					if ((i == g && j == q) || (i == g - 1 && j == q - 1) || (i == g - 2 && j == q - 2) || (i == g - 3 && j == q - 3) || (i == g - 4 && j == q - 4))
						SetConsoleTextAttribute(h, 153);
					cout << arraya[i][j];
				}
			}

			else
			{
				cout << arraya[i][j];
			}

			SetConsoleTextAttribute(h, 8);
			cout << "  *";
		}
		cout << "\n";
		cout << "\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
	}
	cout << "\n";
}
void shape()
{

	system("cls");
	SetConsoleTextAttribute(h, 3);
	cout << "\t\t\t_________________________________________________________________________\n";
	cout << "\t\t\t";
	for (int i = 0; i < 9; i++)
	{
		SetConsoleTextAttribute(h, 9);
		cout << "|   ";
		SetConsoleTextAttribute(h, 5);
		cout << number[i] << "   ";
	}
	SetConsoleTextAttribute(h, 9);
	cout << "|\n";
	SetConsoleTextAttribute(h, 8);
	cout << "\t\t\t_________________________________________________________________________\n";
	cout << "\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";

	for (int i = 0; i < 9; i++)
	{
		cout << "\t\t\t";
		cout << "*";
		for (int j = 0; j < 9; j++)
		{
			cout << "  ";
			if (arraya[i][j] == " X ")
			{
				SetConsoleTextAttribute(h, 68);
				cout << arraya[i][j];
			}
			else if (arraya[i][j] == " O ")
			{
				SetConsoleTextAttribute(h, 17);
				cout << arraya[i][j];
			}
			else
			{
				cout << arraya[i][j];
			}

			SetConsoleTextAttribute(h, 8);
			cout << "  *";
		}
		cout << "\n";
		cout << "\t\t\t* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n";
	}
	cout << "\n";
}
void play()
{
	if (mood == "2")
	{
	tryagain:
		SetConsoleTextAttribute(h, 6);
		string col;

		if (t == 0)
		{
			int random;
			srand(time(0));
			random = rand() % 2 + 1;

			if (random == 1)
			{
				SetConsoleTextAttribute(h, 10);
				cout << "\t\t\t\t\t   The ";
				SetConsoleTextAttribute(h, 4);
				cout << "Red Player ";
				SetConsoleTextAttribute(h, 10);
				cout << "won in the toss \n";
				SetConsoleTextAttribute(h, 14);
				cout << "\t\t\t\t\t  So , the red will start the play\n\n";
				player = " X ";
			}
			else if (random == 2)
			{
				SetConsoleTextAttribute(h, 10);
				cout << "\t\t\t\t\t   The ";
				SetConsoleTextAttribute(h, 1);
				cout << "Blue Player ";
				SetConsoleTextAttribute(h, 10);
				cout << "won in the toss \n";
				SetConsoleTextAttribute(h, 14);
				cout << "\t\t\t\t\t  So , the blue will start the play\n\n";
				player = " O ";
			}
			t++;
		}

		SetConsoleTextAttribute(h, 6);
		if (player == " X ")
		{
			cout << "Choose your Column - you're the Red player :" << "[ ";
			SetConsoleTextAttribute(h, 68);
			cout << "   ";
			SetConsoleTextAttribute(h, 6);
			cout << " ]\n";
		}
		else if (player == " O ")
		{
			cout << "Choose your Column - you're the Blue player :" << "[ ";
			SetConsoleTextAttribute(h, 17);
			cout << "   ";
			SetConsoleTextAttribute(h, 6);
			cout << " ]\n";
		}
		cin >> col;

		if (col != "1" && col != "2" && col != "3" && col != "4" && col != "5" && col != "6" && col != "7" && col != "8" && col != "9")
		{
			SetConsoleTextAttribute(h, 4);
			cout << "\n\t\t\t\t ((Error !!!!!)) You Entered incorrect Number \n";
			cout << "__________________________________________________Please Try Again_____________________________________________________\n\n";
			goto tryagain;
		}

		if (arraya[0][stoi(col) - 1] == " X " || arraya[0][stoi(col) - 1] == " O ")
		{
			SetConsoleTextAttribute(h, 4);
			cout << "\n\t\t\t\t((Error !!!!!)) Your Selected Column is already Full \n";
			cout << "__________________________________________________Please Try Again_____________________________________________________\n\n";
			goto tryagain;
		}

		for (int i = 8; i >= 0; i--)
		{
			if (arraya[i][(stoi(col)) - 1] == "   ")
			{
				arraya[i][(stoi(col)) - 1] = player;
				break;
			}
		}

		if (player == " X ")
		{
			player = " O ";
		}
		else
			player = " X ";
	}

	else if (mood == "1")
	{
	tryagain2:
		int x; // I need it in 1 player x
		int y; // I need it in 1 player o


		SetConsoleTextAttribute(h, 6);
		string col;
		if (player == " X ")
		{
			cout << "Choose your Column - you're the Red player :" << "[ ";
			SetConsoleTextAttribute(h, 68);
			cout << "   ";
			SetConsoleTextAttribute(h, 6);
			cout << " ]\n";
		}
		else if (player == " O ")
		{
			cout << "Choose your Column - you're the Blue player :" << "[ ";
			SetConsoleTextAttribute(h, 17);
			cout << "   ";
			SetConsoleTextAttribute(h, 6);
			cout << " ]\n";
		}
		cin >> col;

		if (col != "1" && col != "2" && col != "3" && col != "4" && col != "5" && col != "6" && col != "7" && col != "8" && col != "9")
		{
			SetConsoleTextAttribute(h, 4);
			cout << "\n\t\t\t\t ((Error !!!!!)) You Entered incorrect Number \n";
			cout << "__________________________________________________Please Try Again_____________________________________________________\n\n";
			goto tryagain2;
		}

		if (arraya[0][stoi(col) - 1] == " X " || arraya[0][stoi(col) - 1] == " O ")
		{
			SetConsoleTextAttribute(h, 4);
			cout << "\n\t\t\t\t((Error !!!!!)) Your Selected Column is already Full \n";
			cout << "__________________________________________________Please Try Again_____________________________________________________\n\n";
			goto tryagain2;
		}

		for (int i = 8; i >= 0; i--)
		{
			if (arraya[i][(stoi(col)) - 1] == "   ")
			{
				arraya[i][(stoi(col)) - 1] = player;
				break;
			}
		}

		if (player == " X ")
		{


			x = 0;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{

					if (arraya[i][j] == " X " && arraya[i][j + 1] == " X " && arraya[i][j + 2] == " X " && arraya[i][j + 3] == " X " && (arraya[i][j + 4] != " O " || arraya[i][j - 1] != " O "))
					{
						if (i == 8)
						{

							if (arraya[i][j + 4] != " O " && arraya[i][j + 4] != " X ")
								arraya[i][j + 4] = " O ";
							else
								arraya[i][j - 1] = " O ";
						}
						else
						{
							if (arraya[i + 1][j + 4] == " X " || arraya[i + 1][j + 4] == " O " && arraya[i][j + 4] != " X ")
								arraya[i][j + 4] = " O ";
							else if (arraya[i + 1][j - 1] == " X " || arraya[i + 1][j - 1] == " O ")
								arraya[i][j - 1] = " O ";
							else
								goto Corr;
						}

					}
					else
						x++;
				}
			}

			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (arraya[i + 1][j] == " X " && arraya[i + 2][j] == " X " && arraya[i + 3][j] == " X " && arraya[i + 4][j] == " X " && arraya[i][j] != " O ")
					{
						arraya[i][j] = " O ";
					}
					else
						x++;
				}
			}

			if (level == "2" || level == "3")
			{
				for (int i = 8; i > 3; i--)
				{
					for (int j = 0; j < 5; j++)
					{
						if (arraya[i][j] == " X " && arraya[i - 1][j + 1] == " X " && arraya[i - 2][j + 2] == " X " && arraya[i - 3][j + 3] == " X " && arraya[i - 4][j + 4] != " O ")
						{
							if (arraya[i - 3][j + 4] == " X " || arraya[i - 3][j + 4] == " O ")
							{
								arraya[i - 4][j + 4] = " O ";
							}
							else if (j > 0)
							{
								if (arraya[i][j - 1] == " X " || arraya[i][j - 1] == " O ")
									arraya[i + 1][j - 1] = " O ";
							}
							else
								goto Corr;
						}
						else
							x++;

					}
				}
			}

			if (level == "2" || level == "3")
			{
				for (int i = 8; i > 3; i--)
				{
					for (int j = 8; j > 3; j--)
					{
						if (arraya[i][j] == " X " && arraya[i - 1][j - 1] == " X " && arraya[i - 2][j - 2] == " X " && arraya[i - 3][j - 3] == " X " && arraya[i - 4][j - 4] != " O ")
						{
							if (arraya[i - 3][j - 4] == " X " || arraya[i - 3][j - 4] == " O ")
							{
								arraya[i - 4][j - 4] = " O ";
							}
							else if (i < 8 && j < 8)
							{
								if (arraya[i + 1][j] == " X " || arraya[i + 1][j] == " O ")
									arraya[i + 1][j + 1] = " O ";
							}
							else
								goto Corr;
						}
						else
							x++;
					}
				}
			}

			if (level == "3")
			{

				for (int i = 0; i < 9; i++)
				{
					for (int j = 0; j < 9; j++)
					{
						if (arraya[i][j] == " O " && arraya[i][j + 1] == " O " && arraya[i][j + 2] == " O " && arraya[i][j + 3] == " O " && (arraya[i][j + 4] != " X " || arraya[i][j - 1] != " X "))
						{
							if (i == 8)
							{
								if (arraya[i][j + 4] == " O ")
									arraya[i][j - 1] = " O ";
								else
									arraya[i][j + 4] = " O ";
							}
							else
							{
								if (arraya[i + 1][j + 4] == " X " || arraya[i + 1][j + 4] == " O ")
									arraya[i][j + 4] = " O ";
								else if (arraya[i + 1][j - 1] == " X " || arraya[i + 1][j - 1] == " O ")
									arraya[i][j - 1] = " O ";
								else
									goto Corr;
							}

						}
						else
							x++;
					}
				}

				for (int i = 0; i < 9; i++)
				{
					for (int j = 0; j < 9; j++)
					{
						if (arraya[i + 1][j] == " O " && arraya[i + 2][j] == " O " && arraya[i + 3][j] == " O " && arraya[i + 4][j] == " O " && arraya[i][j] != " X ")
						{
							arraya[i][j] = " O ";
						}
						else
							x++;
					}
				}

				for (int i = 8; i > 3; i--)
				{
					for (int j = 0; j < 5; j++)
					{
						if (arraya[i][j] == " O " && arraya[i - 1][j + 1] == " O " && arraya[i - 2][j + 2] == " O " && arraya[i - 3][j + 3] == " O " && arraya[i - 4][j + 4] != " X ")
						{
							if (arraya[i - 3][j + 4] == " X " || arraya[i - 3][j + 4] == " O ")
							{
								arraya[i - 4][j + 4] = " O ";
							}
							else if (j > 0)
							{
								if (arraya[i][j - 1] == " X " || arraya[i][j - 1] == " O ")
									arraya[i + 1][j - 1] = " O ";
							}
							else
								goto Corr;
						}
						else
							x++;

					}
				}

				for (int i = 8; i > 3; i--)
				{
					for (int j = 8; j > 3; j--)
					{
						if (arraya[i][j] == " O " && arraya[i - 1][j - 1] == " O " && arraya[i - 2][j - 2] == " O " && arraya[i - 3][j - 3] == " O " && arraya[i - 4][j - 4] != " X ")
						{
							if (arraya[i - 3][j - 4] == " X " || arraya[i - 3][j - 4] == " O ")
							{
								arraya[i - 4][j - 4] = " O ";
							}
							else if (i < 8 && j < 8)
							{
								if (arraya[i + 1][j] == " X " || arraya[i + 1][j] == " O ")
									arraya[i + 1][j + 1] = " O ";
							}
							else
								goto Corr;
						}
						else
							x++;
					}
				}

			}

			if ((level == "1" && x == 162) || (level == "2" && x == 212) || (level == "3" && x == 424))
			{

			Corr:


				if (stoi(col) == 1)
				{
					if (arraya[0][1] != " X " && arraya[0][1] != " O ")
					{
						for (int i = 8; i >= 0; i--)
						{
							if (arraya[i][1] == "   ")
							{
								arraya[i][1] = " O ";
								break;
							}
						}
					}
					else
						goto Corr2;
				}
				else if (arraya[0][stoi(col) - 2] != " X " && arraya[0][stoi(col) - 2] != " O ")
				{

					for (int i = 8; i >= 0; i--)
					{
						if (arraya[i][(stoi(col)) - 2] == "   ")
						{
							arraya[i][(stoi(col)) - 2] = " O ";
							break;
						}
					}
				}
				else if (arraya[0][stoi(col)] != " X " && arraya[0][stoi(col)] != " O " && level == "3")
				{
					for (int i = 8; i >= 0; i--)
					{
						if (arraya[i][(stoi(col))] == "   ")
						{
							arraya[i][(stoi(col))] = " O ";
							break;
						}
					}
				}
				else
				{
				Corr2:

					int count = 0;
					for (int i = 8; i >= 0; i--)
					{
						for (int j = 0; j < 9; j++)
						{
							if (arraya[i][j] == "   ")
							{
								arraya[i][j] = " O ";
								count++;
								break;
							}
						}
						if (count > 0)
							break;
					}

				}
			}


		}


		else if (player == " O ")
		{

			y = 0;

			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (arraya[i][j] == " O " && arraya[i][j + 1] == " O " && arraya[i][j + 2] == " O " && arraya[i][j + 3] == " O " && (arraya[i][j + 4] != " X " || arraya[i][j - 1] != " X "))
					{
						if (i == 8)
						{
							if (arraya[i][j + 4] != " X " && arraya[i][j + 4] != " O ")
								arraya[i][j + 4] = " X ";
							else
								arraya[i][j - 1] = " X ";
						}
						else
						{
							if (arraya[i + 1][j + 4] == " X " || arraya[i + 1][j + 4] == " O " && arraya[i][j + 4] != " O ")
								arraya[i][j + 4] = " X ";
							else if (arraya[i + 1][j - 1] == " X " || arraya[i + 1][j - 1] == " O ")
								arraya[i][j - 1] = " X ";
							else
								goto Corro;
						}

					}
					else
						y++;
				}
			}


			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					if (arraya[i + 1][j] == " O " && arraya[i + 2][j] == " O " && arraya[i + 3][j] == " O " && arraya[i + 4][j] == " O " && arraya[i][j] != " X ")
					{
						arraya[i][j] = " X ";
					}
					else
						y++;
				}
			}

			if (level == "2" || level == "3")
			{
				for (int i = 8; i > 3; i--)
				{
					for (int j = 0; j < 5; j++)
					{
						if (arraya[i][j] == " O " && arraya[i - 1][j + 1] == " O " && arraya[i - 2][j + 2] == " O " && arraya[i - 3][j + 3] == " O " && arraya[i - 4][j + 4] != " X ")
						{
							if (arraya[i - 3][j + 4] == " X " || arraya[i - 3][j + 4] == " O ")
							{
								arraya[i - 4][j + 4] = " X ";
							}
							else if (j > 0)
							{
								if (arraya[i][j - 1] == " X " || arraya[i][j - 1] == " O ")
									arraya[i + 1][j - 1] = " X ";
							}
							else
								goto Corro;
						}
						else
							y++;

					}
				}
			}

			if (level == "2" || level == "3")
			{
				for (int i = 8; i > 3; i--)
				{
					for (int j = 8; j > 3; j--)
					{
						if (arraya[i][j] == " O " && arraya[i - 1][j - 1] == " O " && arraya[i - 2][j - 2] == " O " && arraya[i - 3][j - 3] == " O " && arraya[i - 4][j - 4] != " X ")
						{
							if (arraya[i - 3][j - 4] == " X " || arraya[i - 3][j - 4] == " O ")
							{
								arraya[i - 4][j - 4] = " X ";
							}
							else if (i < 8 && j < 8)
							{
								if (arraya[i + 1][j] == " X " || arraya[i + 1][j] == " O ")
									arraya[i + 1][j + 1] = " X ";
							}
							else
								goto Corro;
						}
						else
							y++;
					}
				}
			}

			if (level == "3")
			{
				for (int i = 0; i < 9; i++)
				{
					for (int j = 0; j < 9; j++)
					{
						if (arraya[i][j] == " X " && arraya[i][j + 1] == " X " && arraya[i][j + 2] == " X " && arraya[i][j + 3] == " X " && (arraya[i][j + 4] != " O " || arraya[i][j - 1] != " O "))
						{
							if (i == 8)
							{
								if (arraya[i][j + 4] == " X ")
									arraya[i][j - 1] = " X ";
								else
									arraya[i][j + 4] = " X ";
							}
							else
							{
								if (arraya[i + 1][j + 4] == " X " || arraya[i + 1][j + 4] == " O ")
									arraya[i][j + 4] = " X ";
								else if (arraya[i + 1][j - 1] == " X " || arraya[i + 1][j - 1] == " O ")
									arraya[i][j - 1] = " X ";
								else
									goto Corro;
							}

						}
						else
							y++;
					}
				}

				for (int i = 0; i < 9; i++)
				{
					for (int j = 0; j < 9; j++)
					{
						if (arraya[i + 1][j] == " X " && arraya[i + 2][j] == " X " && arraya[i + 3][j] == " X " && arraya[i + 4][j] == " X " && arraya[i][j] != " O ")
						{
							arraya[i][j] = " X ";
						}
						else
							y++;
					}
				}

				for (int i = 8; i > 3; i--)
				{
					for (int j = 0; j < 5; j++)
					{
						if (arraya[i][j] == " X " && arraya[i - 1][j + 1] == " X " && arraya[i - 2][j + 2] == " X " && arraya[i - 3][j + 3] == " X " && arraya[i - 4][j + 4] != " O ")
						{
							if (arraya[i - 3][j + 4] == " X " || arraya[i - 3][j + 4] == " O ")
							{
								arraya[i - 4][j + 4] = " X ";
							}
							else if (j > 0)
							{
								if (arraya[i][j - 1] == " X " || arraya[i][j - 1] == " O ")
									arraya[i + 1][j - 1] = " X ";
							}
							else
								goto Corro;
						}
						else
							y++;

					}
				}

				for (int i = 8; i > 3; i--)
				{
					for (int j = 8; j > 3; j--)
					{
						if (arraya[i][j] == " X " && arraya[i - 1][j - 1] == " X " && arraya[i - 2][j - 2] == " X " && arraya[i - 3][j - 3] == " X " && arraya[i - 4][j - 4] != " O ")
						{
							if (arraya[i - 3][j - 4] == " X " || arraya[i - 3][j - 4] == " O ")
							{
								arraya[i - 4][j - 4] = " X ";
							}
							else if (i < 8 && j < 8)
							{
								if (arraya[i + 1][j] == " X " || arraya[i + 1][j] == " O ")
									arraya[i + 1][j + 1] = " X ";
							}
							else
								goto Corro;
						}
						else
							y++;
					}
				}

			}

			if ((level == "1" && y == 162) || (level == "2" && y == 212) || (level == "3" && y == 424))
			{

			Corro:


				if (stoi(col) == 1)
				{
					if (arraya[0][1] != " X " && arraya[0][1] != " O ")
					{
						for (int i = 8; i >= 0; i--)
						{
							if (arraya[i][1] == "   ")
							{
								arraya[i][1] = " X ";
								break;
							}
						}
					}
					else
						goto Corro2;
				}
				else if (arraya[0][stoi(col) - 2] != " X " && arraya[0][stoi(col) - 2] != " O ")
				{

					for (int i = 8; i >= 0; i--)
					{
						if (arraya[i][(stoi(col)) - 2] == "   ")
						{
							arraya[i][(stoi(col)) - 2] = " X ";
							break;
						}
					}
				}
				else if (arraya[0][stoi(col)] != " X " && arraya[0][stoi(col)] != " O " && level == "3")
				{
					for (int i = 8; i >= 0; i--)
					{
						if (arraya[i][(stoi(col))] == "   ")
						{
							arraya[i][(stoi(col))] = " X ";
							break;
						}
					}
				}
				else
				{
				Corro2:

					int count = 0;
					for (int i = 8; i >= 0; i--)
					{
						for (int j = 0; j < 9; j++)
						{
							if (arraya[i][j] == "   ")
							{
								arraya[i][j] = " X ";
								count++;
								break;
							}
						}
						if (count > 0)
							break;
					}

				}
			}


		}

	}
}
string  winner()
{
	int counter = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arraya[i][j] != " X " && arraya[i][j] != " O ")
			{
				counter++;
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arraya[i][j] == " X " && arraya[i][j + 1] == " X " && arraya[i][j + 2] == " X " && arraya[i][j + 3] == " X " && arraya[i][j + 4] == " X ")
			{
				a = i, b = j;
				return "X";
			}
			else if (arraya[i][j] == " O " && arraya[i][j + 1] == " O " && arraya[i][j + 2] == " O " && arraya[i][j + 3] == " O " && arraya[i][j + 4] == " O ")
			{
				a = i, b = j;
				return "O";
			}
			else if (arraya[i][j] == " X " && arraya[i + 1][j] == " X " && arraya[i + 2][j] == " X " && arraya[i + 3][j] == " X " && arraya[i + 4][j] == " X ")
			{
				c = i, d = j;
				return "X";
			}
			else if (arraya[i][j] == " O " && arraya[i + 1][j] == " O " && arraya[i + 2][j] == " O " && arraya[i + 3][j] == " O " && arraya[i + 4][j] == " O ")
			{
				c = i, d = j;
				return "O";
			}
		}
	}



	for (int i = 8; i > 3; i--)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arraya[i][j] == " X " && arraya[i - 1][j + 1] == " X " && arraya[i - 2][j + 2] == " X " && arraya[i - 3][j + 3] == " X " && arraya[i - 4][j + 4] == " X ")
			{
				e = i, f = j;
				return "X";
			}
			else if (arraya[i][j] == " O " && arraya[i - 1][j + 1] == " O " && arraya[i - 2][j + 2] == " O " && arraya[i - 3][j + 3] == " O " && arraya[i - 4][j + 4] == " O ")
			{
				e = i, f = j;
				return "O";
			}

		}
	}
	for (int i = 8; i > 3; i--)
	{
		for (int j = 8; j > 3; j--)
		{
			if (arraya[i][j] == " X " && arraya[i - 1][j - 1] == " X " && arraya[i - 2][j - 2] == " X " && arraya[i - 3][j - 3] == " X " && arraya[i - 4][j - 4] == " X ")
			{
				g = i, q = j;
				return "X";
			}
			else if (arraya[i][j] == " O " && arraya[i - 1][j - 1] == " O " && arraya[i - 2][j - 2] == " O " && arraya[i - 3][j - 3] == " O " && arraya[i - 4][j - 4] == " O ")
			{
				g = i, q = j;
				return "O";
			}

		}
	}


	if (counter == 0)
	{
		return "D";
	}

	return ".";
}
int main()
{

playagain:

	arraya[0][0] = "   ", arraya[1][0] = "   ", arraya[2][0] = "   ", arraya[3][0] = "   ", arraya[4][0] = "   ", arraya[5][0] = "   ", arraya[6][0] = "   ", arraya[7][0] = "   ", arraya[8][0] = "   ";
	arraya[0][1] = "   ", arraya[1][1] = "   ", arraya[2][1] = "   ", arraya[3][1] = "   ", arraya[4][1] = "   ", arraya[5][1] = "   ", arraya[6][1] = "   ", arraya[7][1] = "   ", arraya[8][1] = "   ";
	arraya[0][2] = "   ", arraya[1][2] = "   ", arraya[2][2] = "   ", arraya[3][2] = "   ", arraya[4][2] = "   ", arraya[5][2] = "   ", arraya[6][2] = "   ", arraya[7][2] = "   ", arraya[8][2] = "   ";
	arraya[0][3] = "   ", arraya[1][3] = "   ", arraya[2][3] = "   ", arraya[3][3] = "   ", arraya[4][3] = "   ", arraya[5][3] = "   ", arraya[6][3] = "   ", arraya[7][3] = "   ", arraya[8][3] = "   ";
	arraya[0][4] = "   ", arraya[1][4] = "   ", arraya[2][4] = "   ", arraya[3][4] = "   ", arraya[4][4] = "   ", arraya[5][4] = "   ", arraya[6][4] = "   ", arraya[7][4] = "   ", arraya[8][4] = "   ";
	arraya[0][5] = "   ", arraya[1][5] = "   ", arraya[2][5] = "   ", arraya[3][5] = "   ", arraya[4][5] = "   ", arraya[5][5] = "   ", arraya[6][5] = "   ", arraya[7][5] = "   ", arraya[8][5] = "   ";
	arraya[0][6] = "   ", arraya[1][6] = "   ", arraya[2][6] = "   ", arraya[3][6] = "   ", arraya[4][6] = "   ", arraya[5][6] = "   ", arraya[6][6] = "   ", arraya[7][6] = "   ", arraya[8][6] = "   ";
	arraya[0][7] = "   ", arraya[1][7] = "   ", arraya[2][7] = "   ", arraya[3][7] = "   ", arraya[4][7] = "   ", arraya[5][7] = "   ", arraya[6][7] = "   ", arraya[7][7] = "   ", arraya[8][7] = "   ";
	arraya[0][8] = "   ", arraya[1][8] = "   ", arraya[2][8] = "   ", arraya[3][8] = "   ", arraya[4][8] = "   ", arraya[5][8] = "   ", arraya[6][8] = "   ", arraya[7][8] = "   ", arraya[8][8] = "   ";
	string re;
	t = 0; //toss

	SetConsoleTextAttribute(h, 13);
	cout << "\t\t\t\t\t  Welcome to the ";
	SetConsoleTextAttribute(h, 4);
	cout << "CONNECT-FOUR ";
	SetConsoleTextAttribute(h, 13);
	cout << "Game\n\n";


tryagainm:
	SetConsoleTextAttribute(h, 14);
	cout << "Choose the Mood of the Game (1) One Player , (2) Tow Players , To Exit Press (0)\n";
	cin >> mood;

	
	if (mood == "0")
	{
		goto Exit;
	}
	if (mood != "1" && mood != "2")
	{
		cout << "\n\t\t\t\t ";

		SetConsoleTextAttribute(h, 4);
		cout << "(Error !!!!) You Entered incorrect Number \n";
		cout << "__________________________________________________Please Try Again_____________________________________________________\n\n";
		goto tryagainm;
	}

	if (mood == "1")
	{
	tryagainxo2:
		SetConsoleTextAttribute(h, 2);
		cout << "\n\t\t\t\t\t       Choose a Color for play \n";
		SetConsoleTextAttribute(h, 4);
		cout << "\t\t\t\t\t1 : The Red       ";
		SetConsoleTextAttribute(h, 1);
		cout << "      2 : The Blue \n";
		cin >> player;

		if (player == "1")
		{
			player = " X ";
		}
		else if (player == "2")
		{
			player = " O ";
		}
		else
		{
			cout << "\n\t\t\t\t";
			SetConsoleTextAttribute(h, 4);
			cout << "(Error !!!!!) You Entered incorrect Number enter 1 or 2 \n";
			cout << "__________________________________________________Please Try Again_____________________________________________________\n";
			goto tryagainxo2;
		}
	}

	if (mood == "1")
	{
	trylevel:
		SetConsoleTextAttribute(h, 2);
		cout << "\n\t\t\t\t\t     Choose the Level of the Game \n";
		SetConsoleTextAttribute(h, 14);
		cout << "\t\t\t\t\t1 - Easy    ";
		SetConsoleTextAttribute(h, 12);
		cout << "  2 - Normal   ";
		SetConsoleTextAttribute(h, 4);
		cout << "  3 - Hard\n";

		cin >> level;

		if (level != "1" && level != "2" && level != "3")
		{
			cout << "\n\t\t\t\t";
			SetConsoleTextAttribute(h, 4);
			cout << "(Error !!!!!) You Entered incorrect Number enter 1 or 2 or 3\n";
			cout << "__________________________________________________Please Try Again_____________________________________________________\n";
			goto trylevel;
		}
	}

	if (mood == "1")
	{
	trystart:
		SetConsoleTextAttribute(h, 2);
		cout << "\n\t\t\t\t\t     Choose Who will start the Play \n";
		SetConsoleTextAttribute(h, 1);
		cout << "\t\t\t1 - You will start the Play    ";
		SetConsoleTextAttribute(h, 3);
		cout << "  2 - The Computer will start the Play\n";

		cin >> start;

		if (start != "1" && start != "2")
		{
			cout << "\n\t\t\t\t";
			SetConsoleTextAttribute(h, 4);
			cout << "(Error !!!!!) You Entered incorrect Number enter 1 or 2 \n";
			cout << "__________________________________________________Please Try Again_____________________________________________________\n";
			goto trystart;
		}

		else if (start == "2")
		{
			if (player == " X ")
			{
				srand(time(0));
				int x;
				x = rand() % 9;

				for (int i = 8; i >= 0; i--)
				{
					if (arraya[i][x] == "   ")
					{
						arraya[i][x] = " O ";
						break;
					}
				}
			}
			else if (player == " O ")
			{
				srand(time(0));
				int x;
				x = rand() % 9;
				for (int i = 8; i >= 0; i--)
				{
					if (arraya[i][x] == "   ")
					{
						arraya[i][x] = " X ";
						break;
					}
				}
			}
		}
	}


	while (winner() == ".")
	{
		shape();
		play();
	}

	final_shape();
	if (winner() == "D")
	{
		SetConsoleTextAttribute(h, 6);
		cout << "\n No Winner !! the result is Draw !!!!!\n\n" << "\n";
	}
	else if (winner() == "X")
	{
		if (mood == "2")
		{

			SetConsoleTextAttribute(h, 6);
			cout << "\n\t\t\t\t\t    The Winner is the ";
			SetConsoleTextAttribute(h, 4);
			cout << "Red Player ";
			SetConsoleTextAttribute(h, 68);
			cout << "   " << "\n\n";
		}
		else if (mood == "1")
		{
			if (player == " X ")
			{
				SetConsoleTextAttribute(h, 6);
				cout << "\n\t\t\t\t\t    You are the Winner ";
				SetConsoleTextAttribute(h, 4);
				cout << "Red Player ";
				SetConsoleTextAttribute(h, 68);
				cout << "   " << "\n\n";
			}
			else if (player == " O ")
			{
				SetConsoleTextAttribute(h, 6);
				cout << "\n\t\t\t    You lose the Game and The Computer is the Winner ";
				SetConsoleTextAttribute(h, 4);
				cout << "Red Player ";
				SetConsoleTextAttribute(h, 68);
				cout << "   " << "\n\n";
			}
		}

	}
	else if (winner() == "O")
	{
		if (mood == "2")
		{
			SetConsoleTextAttribute(h, 6);
			cout << "\n\t\t\t\t\t    The Winner is the ";
			SetConsoleTextAttribute(h, 1);
			cout << "Blue Player ";
			SetConsoleTextAttribute(h, 17);
			cout << "   " << "\n\n";
		}

		else if (mood == "1")
		{
			if (player == " O ")
			{
				SetConsoleTextAttribute(h, 6);
				cout << "\n\t\t\t\t\t    You are the Winner ";
				SetConsoleTextAttribute(h, 1);
				cout << "Blue Player ";
				SetConsoleTextAttribute(h, 17);
				cout << "   " << "\n\n";
			}
			else if (player == " X ")
			{
				SetConsoleTextAttribute(h, 6);
				cout << "\n\t\t\t    You lose the Game and The Computer is the Winner ";
				SetConsoleTextAttribute(h, 1);
				cout << "Blue Player ";
				SetConsoleTextAttribute(h, 17);
				cout << "   " << "\n\n";
			}
		}
	}


	SetConsoleTextAttribute(h, 3);
	cout << "To Play this Game Again please Press on (Y) or Press Any Key to Exit\n";
	cin >> re;

	if (re == "y" || re == "Y")
	{
		system("cls");
		goto playagain;
	}
	else
	{
	Exit:
		system("cls");

		cout << "\t\t\t\t\t\tProject Implementers\n";

		SetConsoleTextAttribute(h, 4);
		cout << "\n\t\t\t\t\t1 - Ahmed Eteka\n\n";
		cout << "\t\t\t\t\t\t\t2 - Marwan Yasser\n\n";
		cout << "\t\t\t\t\t3 - Abdelrahman Hamada\n\n";
		cout << "\t\t\t\t\t\t\t4 - Alaa Mohey\n\n";
		cout << "\t\t\t\t\t5 - Aml\n\n";
		cout << "\t\t\t\t\t\t\t6 - Ahmed Ayman\n\n\n";

		SetConsoleTextAttribute(h, 10);
		cout << "____________________________________________Thanks For Using Our Game___________________________________________________\n\n\n";
	}

	SetConsoleTextAttribute(h, 7);
	return 0;
}

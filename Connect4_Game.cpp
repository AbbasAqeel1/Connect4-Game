#include <iostream>
using namespace std;




void DrawBoard(char Board[7][7])
{
	//Drawing Columns numbers
	for (int i = 0;i < 7;i++)
	{
		cout << "   " << i+1 << "  ";
	}
	cout << "\n\n";


	//Drawing the Columns
	for (int i = 0;i < 7;i++)
	{
		for (int j = 0;j < 8;j++)
		{
			if (j != 7)
			{
				cout << "|  " << Board[i][j] << "  ";
			}
			else
			{
				cout << "|    ";
			}
			
		}
		cout << endl;
		
	}


	//Drawing the floor of the game
	for (int i = 0;i < 6;i++)
	{
		cout << "-------";
	}
	cout << "-";
	
	
	
}

//This function is to fill X or O in the matrix 
bool FillCharInBoard(char board[7][7], int ColunNum,char Character)
{

	ColunNum--;
	for (int i = 6;i >= 0;i--)
	{
		if (board[i][ColunNum] == ' ')
		{
			board[i][ColunNum] = Character;

			//if the field 
			return true;
		}
	}

	return false;
}





char CheckWinner(char board[7][7])
{

	//check rows
	for (int i = 0;i < 7;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			if (board[i][j] != ' ' && board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j + 2] == board[i][j + 3])
			{
				return board[i][j];
			}
		}
	}
	//check columns
	for (int i = 0;i < 7;i++)
	{
		for (int j = 0;j < 4;j++)
		{
			if (board[j][i] != ' ' && board[j][i] == board[j + 1][i] && board[j + 1][i] == board[j + 2][i] && board[j + 2][i] == board[j + 3][i])
			{
				return board[j][i];
			}
		}
	}

	//cehck Diagonal
	for (int i = 0;i < 4;i++)
	{
		for (int j = i;j <= i;j++)
		{
			if (board[i][j] != ' ' && board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i + 2][j + 2] == board[i + 3][j + 3])
			{
				return board[i][j];
			}
		}
	}

	//check Diagonal from board[0][6] to board[6][0]
	for(int i = 0;i < 4;i++)
	{
		for (int j = 6-i; j >= 6-i;j--)
		{
			if (board[i][j] != ' ' && board[i][j] == board[i + 1][j - 1] && board[i + 1][j - 1] == board[i + 2][j - 2] && board[i + 2][j - 2] == board[i + 3][j - 3])
			{
				return board[i][j];
			}
		}
	}


	//---------------------------------(1)

	//from board[0][1] to board[5][6]
	if (board[0][1] != ' ' && board[0][1] == board[1][2] &&
		board[1][2] == board[2][3] &&
		board[2][3] == board[3][4])
	{
		return board[0][1];
	}
	if (board[1][2] != ' ' && board[1][2] == board[2][3] &&
		board[2][3] == board[3][4] &&
		board[3][4] == board[4][5])
	{
		return board[1][2];
	}
	if (board[2][3] != ' ' && board[2][3] == board[3][4] &&
		board[3][4] == board[4][5] &&
		board[4][5] == board[5][6])
	{
		return board[2][3];
	}


	//from board[0][2] to board[4][6]
	if (board[0][2] != ' ' && board[0][2] == board[1][3] &&
		board[1][3] == board[2][4] &&
		board[2][4] == board[3][5])
	{
		return board[0][2];
	}
	if (board[1][3] != ' ' && board[1][3] == board[2][4] &&
		board[2][4] == board[3][5] &&
		board[3][5] == board[4][6])
	{
		return board[1][3];
	}

	//from board[0][3] to board[3][6]
	if (board[0][3] != ' ' && board[0][3] == board[1][4] &&
		board[1][4] == board[2][5] &&
		board[2][5] == board[3][6])
	{
		return board[0][3];
	}


	//-------------------------------------------(2)




	//from board[1][0] to board[6][5]
	if (board[1][0] != ' ' && board[1][0] == board[2][1] &&
		board[2][1] == board[3][2] &&
		board[3][2] == board[4][3])
	{
		return board[1][0];
	}
	if (board[2][1] != ' ' && board[2][1] == board[3][2] &&
		board[3][2] == board[4][3] &&
		board[4][3] == board[5][4])
	{
		return board[2][1];
	}
	if (board[3][2] != ' ' && board[3][2] == board[4][3] &&
		board[4][3] == board[5][4] &&
		board[5][4] == board[6][5])
	{
		return board[3][2];
	}

	

	//from board[2][0] to board[6][4]
	if (board[2][0] != ' ' && board[2][0] == board[3][1] &&
		board[3][1] == board[4][2] &&
		board[4][2] == board[5][3])
	{
		return board[2][0];
	}
	if (board[3][1] != ' ' && board[3][1] == board[4][2] &&
		board[4][2] == board[5][3] &&
		board[5][3] == board[6][4])
	{
		return board[3][1];
	}

	//from board[3][0] to board[6][3]
	if (board[3][0] != ' ' && board[3][0] == board[4][1] &&
		board[4][1] == board[5][2] &&
		board[5][2] == board[6][3])
	{
		return board[3][0];
	}


	//--------------------------------------------(3)


	//from board[6][1] to board[1][6]
	if (board[6][1] != ' ' && board[6][1] == board[5][2] &&
		board[5][2] == board[4][3] &&
		board[4][3] == board[3][4])
	{
		return board[6][1];
	}
	if (board[5][2] != ' ' && board[5][2] == board[4][3] &&
		board[4][3] == board[3][4] &&
		board[3][4] == board[2][5])
	{
		return board[5][2];
	}
	if (board[4][3] != ' ' && board[4][3] == board[3][4] &&
		board[3][4] == board[2][5] &&
		board[2][5] == board[1][6])
	{
		return board[4][3];
	}



	//from board[6][2] to board[2][6]
	if (board[6][2] != ' ' && board[6][2] == board[5][3] &&
		board[5][3] == board[4][4] &&
		board[4][4] == board[3][5])
	{
		return board[6][2];
	}
	if (board[5][3] != ' ' && board[5][3] == board[4][4] &&
		board[4][4] == board[3][5] &&
		board[3][5] == board[2][6])
	{
		return board[5][3];
	}

	//from board[6][3] to board[3][6]
	if (board[6][3] != ' ' && board[6][3] == board[5][4] &&
		board[5][4] == board[4][5] &&
		board[4][5] == board[3][6])
	{
		return board[6][3];
	}

	//------------------------------------------------------(4)


	//from board[5][0] to board[0][5]
	if (board[5][0] != ' ' && board[5][0] == board[4][1] &&
		board[4][1] == board[3][2] &&
		board[3][2] == board[2][3])
	{
		return board[5][0];
	}
	if (board[4][1] != ' ' && board[4][1] == board[3][2] &&
		board[3][2] == board[2][3] &&
		board[2][3] == board[1][4])
	{
		return board[4][1];
	}
	if (board[3][2] != ' ' && board[3][2] == board[2][3] &&
		board[2][3] == board[1][4] &&
		board[1][4] == board[0][5])
	{
		return board[3][2];
	}



	//from board[4][0] to board[0][4]
	if (board[4][0] != ' ' && board[4][0] == board[3][1] &&
		board[3][1] == board[2][2] &&
		board[2][2] == board[1][3])
	{
		return board[4][0];
	}
	if (board[3][1] != ' ' && board[3][1] == board[2][2] &&
		board[2][2] == board[1][3] &&
		board[1][3] == board[0][4])
	{
		return board[3][1];
	}

	//from board[3][0] to board[0][3]
	if (board[3][0] != ' ' && board[3][0] == board[2][1] &&
		board[2][1] == board[1][2] &&
		board[1][2] == board[0][3])
	{
		return board[3][0];
	}

	return ' ';
	
}

void ReadNumber(int& Num,char Turn)
{
	Num = 0;
	while (Num < 1 || Num >7)
	{
		cout << "\nPlease Choose a cloumn between (1-7) for -> [" << Turn << "] : ";
		cin >> Num;
	}
}


void PlayGame()
{
	char board[7][7];
	//Fill the matrix with characters
	for (int i = 0;i < 7;i++)
	{
		for (int j = 0;j < 7;j++)
		{
			board[i][j] = ' ';
		}
	}
	DrawBoard(board);

	char GameOver = ' ';
	bool isX = true;
	char Turn = 'X';
	int PlayCount = 0;
	int ColumnNumber;

	do
	{
		ReadNumber(ColumnNumber,Turn);

		while (!FillCharInBoard(board, ColumnNumber, Turn))
		{
			ReadNumber(ColumnNumber,Turn);
		}

		DrawBoard(board);
		PlayCount++;
		GameOver = CheckWinner(board);
		if (GameOver != ' ' && PlayCount == 49)
		{
			break;
		}

		Turn = (Turn == 'X' ? 'O' : 'X');
	} while (GameOver == ' ');

	if (GameOver == 'X')
	{
		cout << "\nX Won.";
	}
	else if (GameOver == 'O')
	{
		cout << "\nO Won.";
	}
	else
	{
		cout << "\nGame Over, No one won.";
	}

}

int main()
{

	PlayGame();

	return 0;
}
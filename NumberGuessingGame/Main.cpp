#include"Manager.h"

int main() 
{
	int numberBeingGuessed = true;
	int currentMax = 100;
	int currentMin = 0;
	char checkedGuess = ' ';
	while (numberBeingGuessed) 
	{
		checkedGuess = stillGuessing(currentMin, currentMax);
		if (checkedGuess == 'I')
		{
			cout << "Invalid Answer! Try again!!!!" << endl;
			continue;
		}
		else 
		{
			if (checkedGuess == 'S')
			{
				cout << "Smaller" << endl;
				numberBeingGuessed = true;
				currentMax = (currentMax + currentMin) / 2;
				continue;
			}
			else if (checkedGuess == 'L')
			{
				cout << "Larger" << endl;
				numberBeingGuessed = true;
				currentMin = (currentMax + currentMin) / 2;
				continue;
			}
			else if (checkedGuess == 'W') 
			{
				cout << "Win"<<endl;
				numberBeingGuessed = false;
				break;
			}
		}
	}

	return 0;
}
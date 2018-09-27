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
				numberBeingGuessed = true;
				currentMax = currentMax/ 2;
				continue;
			}
			else if (checkedGuess == 'L')
			{
				numberBeingGuessed = true;
				currentMin = (currentMax / pow(2.0f, currentMin));
				continue;
			}
			else if (checkedGuess == 'W') 
			{
				numberBeingGuessed = false;
				break;
			}
		}
	}

	return 0;
}
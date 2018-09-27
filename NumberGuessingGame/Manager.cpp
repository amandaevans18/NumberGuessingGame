#include "Manager.h"

char stillGuessing(int currentMin, int currentMax)
{

	char userInput = ' ';
	int difference = currentMax - currentMin;
	int midNum = 0;
	//check to see if the numbers are close together
	midNum = (currentMax + currentMin) / 2;
	cout << "Is your number " << midNum << "?" << endl;
	cin >> userInput;
	cin.clear();
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	//Basic game logic
	if (userInput == 'n' || userInput == 'N' || userInput == 'y' || userInput == 'Y')
	{
		if (userInput == 'y' || userInput == 'Y')
		{
			//We guessed right!! 
			return 'W';
		}//we didnt guess right lets make our number pool smaller!
		else
		{
			cout << "Is your number larger?" << endl;
			cin >> userInput;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (userInput == 'y' || userInput == 'Y')
			{
				//One is the numbers are 50-100 condition numbers need to go larger!
				return 'L';
			}
			else if (userInput == 'n' || userInput == 'N')
			{
				//then the number has to be 0-50 condition numbers need to go smaller! 
				return 'S';
			}
		}
	}
	else
	{
		// I is for invalid answer
		return 'I';
	}



}

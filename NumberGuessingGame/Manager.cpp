#include "Manager.h"


	char stillGuessing(int currentMin, int currentMax)
	{
		char userInput = ' ';
		int difference = currentMax - currentMin;
		//check to see if the numbers are close together
		if (difference > 10)
		{
			//cut current max in half
			currentMax / 2;
			cout << "Is your number between" << currentMin << " and " << currentMax << endl;
			cin >> userInput;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//Basic game logic
			if (userInput == 'n' || userInput == 'N' || userInput == 'y' || userInput == 'Y')
			{
				if (userInput == 'y' || userInput == 'Y')
				{
					//then the number has to be 0-50 condition numbers need to go smaller! 
					return 'S';
				}
				else if (userInput == 'n' || userInput == 'N')
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
		else
		{
			if (userInput == 'n' || userInput == 'N' || userInput == 'y' || userInput == 'Y')
			{

				if (userInput == 'n' || userInput == 'N')
				{
					cout << "Is your number odd?" << endl;
					cin >> userInput;
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

					if (userInput == 'y' || userInput == 'Y')
					{
						//find the odd number!
						return 'O';
					}
					else if (userInput == 'n' || userInput == 'N')
					{
						//then the number has to be even! 
						return 'E';
					}
					else
					{
						return 'I';
					}

				}
				else
				{
					// I is for invalid answer
					return 'I';
				}

			}
	}

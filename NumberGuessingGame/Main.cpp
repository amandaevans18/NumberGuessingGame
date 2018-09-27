#include"Manager.h"

int main() 
{
	int numberBeingGuessed = true;
	int currentMax = 100;
	int currentMin = 0;
	while (numberBeingGuessed) 
	{
		if (stillGuessing(currentMin, currentMax) == 'S') 
		{
			currentMax / 2;
		}
		if (stillGuessing(currentMin, currentMax) == 'L') 
		{
			
		}
		if (stillGuessing(currentMin, currentMax) == 'I') 
		{
			cout << "Invalid Answer! Try again!!!!" << endl;
			continue;
		}
	}

	return 0;
}
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
			continue;
		}
		else if (stillGuessing(currentMin, currentMax) == 'L') 
		{
			 (currentMax / pow(2.0f, currentMin));
			 continue;
		}
		else if (stillGuessing(currentMin, currentMax) == 'I') 
		{
			cout << "Invalid Answer! Try again!!!!" << endl;
			continue;
		}
	}

	return 0;
}
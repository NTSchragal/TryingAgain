// BusinessCards.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int i;
	string line[5];
	line[0] = "Nicholas Schragal\t\t\t\tNicholas Schragal";
	line[1] = "Astronomy Club President\t\t\tAstronomy Club President";
	line[2] = "nts0010@uah.edu\t\t\t\t\tnts0010@uah.edu";
	line[3] = "601 John Wright Drive\t\t\t\t601 John Wright Drive";
	line[4] = "Huntsville, AL, 35807\t\t\t\tHuntsville, AL, 35807";
	for (i = 0; i < 4; i++)
	{
		cout << line[0] << endl << line[1] << endl << line[2] << endl << line[3] << endl << line[4] << endl << endl;
	}
	
	return 0;
}


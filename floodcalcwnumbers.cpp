/*
Program Description: Flood plains program to find what parts of land are flooded NEED RAND() between 60 and 100 for places  of information

Input Variables:	water_level

Process:             Take water_level and see if level of land in area is submerged in water

Output:              Image of 10 x 10 terrain map
*/


//#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <time.h>
#include <istream>


using namespace std;

double heights;
double water_level = 0;

char quit;


//void  flood_map(double[10][10], double);


int main()
{

	srand(time(0));

	if (quit != 'q')
	{
		cout << " Please enter the height of the water " << endl;
		cin >> water_level;

		for (int i = 1; i <= 10; i++)
		{

			//cout << "*" << endl;// rand();

			for (int j = 1; j <= 10; j++)
			{

				int r = rand() % (100 - 60 + 1) + 60;

				if (r > water_level)
				{
					cout << setw(4) << r << " ";
				}
			}
			cout << endl;
		}
		system("pause");

		cout << "type q to QUIT";
		cin >> quit;
	}
	return 0;
}


/*
void  flood_map(double heights[10][10], double water_level)
{
	for (int i = 1; i <= 10; i++)
	{

		cout << "*" << endl;// rand();

		for (int j = 1; j <= 10; j++)
		{

			int r = rand() % (100 - 60 + 1) + 60;


			if (heights[i][j] < 60)

				cout << setw(4) << "*";
			else cout << " ";
		}
		cout << endl;

	}
}
*/

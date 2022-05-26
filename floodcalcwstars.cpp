/*
Program Description: Flood plains program to find what parts of land are flooded NEED RAND() between 60 and 100 for places  of information


Input Variables:	water_level

Process:             Take water_level and see if level of land in area is submerged in water

Output:              Image of 10 x 10 terrain map
*/


#include <iostream>
#include <string>
#include <istream>
#include <cmath>
#include <cstdlib>
#include <iomanip>


using namespace std;


void flood_map(double heights[10][10], double water_level);



int main()
{


	srand(time(0));

	double heights[10][10];
	double water_level=0;

	cout << "Please enter the waters level\n";


	do
	{
		
		cin >> water_level;

		flood_map(heights, water_level);

		system("pause");

		cout << "enter another water level or enter 9999 to exit\n";

	} 
	while (water_level != 9999);
	{
		return 0;
	}

}



void flood_map(double heights[10][10], double water_level)
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int r = rand() % (100 - 60 + 1) + 60;

			if (r > water_level)
			{
				cout << "* ";
			}
			else cout << " ";
		}
		cout << endl;

	}

}

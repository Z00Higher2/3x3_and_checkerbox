// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Lab 4C
// Write a program checkerboard3x3.cpp that asks the user to input width and height and prints a checkerboard of 3-by-3 squares. 
// (It should work even if the input dimensions are not a multiple of three.)



#include <iostream>
using namespace std;

int main()
{
	int width = 0, height = 0;
	cout << "Input width: ";
	cin >> width;
	cout << "Input height: ";
	cin >> height;

	cout << "\n" << "Shape: " << endl;

	int count_star = 0;
	int count_space = 0;
	//Iterates through the checkerboard
	for(int row = 0; row < height; row++)
	{
		for(int col = 0; col < width; col++)
		{
			//Prints * if column and row number are the same
			if( (col % 6 < 3 && row%6 < 3) || (col%6 >= 3 && row%6 >= 3) )
			{
				if(count_star < 3)
				{
					cout << "*";
				}

				//Increment outside of if-loop
				count_star++; 

				if(count_star == 3)
				{
					//Reset count_star back to 0
					count_star = 0;
				}
			}	

			//Prints space if column and row number are different
			else
			{
				if(count_space < 3)
				{
					cout << " ";
				}
				
				//Increment outside of if-loop
				count_space++;

				if(count_space == 3)
				{
					//Reset count_space back to 0
					count_space = 0;
				}
			}
		}

		cout << endl;
	}	

	return 0;
}
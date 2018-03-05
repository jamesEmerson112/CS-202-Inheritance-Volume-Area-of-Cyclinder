/* An Thien Vo, CS 202 - 1001
* This program will have a class that is derived from
* and has as a base the class of HW 2, to find the total area
* and the volume of a cylinder
* Input: height and radius
* Output: output the total area, and the volume of a cylinder
*/

#include <iostream>
#include <iomanip>
#include "cylinder.h"

using namespace std;

int main()
{
	//introduction for the author
	cout << "An Thien Vo, CS 202 - 1001" << endl;
	cout << "Homework #3: Write a class that is derived from and "
	     << endl
	     << "has as a base the class of HW. 2, to find the volume "
	     << endl
	     << "and the total area of a cylinder"
		 << endl << endl;

	//creating the object to the class cylinder
	//creating objects for a test program
	cylinder cylinderTest1 (10, 20);
	cylinder cylinderTest2 (0, 2);
	cylinder cylinderTest3 (10, -25);
	cylinder cylinderUserTest;

	//declare variables for cylinderUserTest
	double radius,height;

	//print the value of area and volume of the cylinders
	cylinderTest1.print();
	cylinderTest2.print();
	cylinderTest3.print();

	//invoking the user to enter radius and height of the user's desired cylinder
	cout << "Please enter the desired radius and height of the cylinder: "
	     << endl;
	cin >> radius >> height;

	//start while loop so the user can create many test cases
	while (cin)
	{
		//set the values of radius and height into cylinderUserTest
		cylinderUserTest.setRadius(radius);
		cylinderUserTest.setHeight(height);

		//print the value of area and volume of the cylinder
		cylinderUserTest.print();

		//repeat the loop
		cout << "Please enter the desired radius and height of the cylinder: "
	         << endl;

	    cin >> radius >> height;
	}// end while loop

	cin.get();
	return 0;
}

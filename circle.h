// circle.h

#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.141592653589793;

//declare a class circle
class circle
{
public:
	//declare member functions
	
	//set and get the radius of the class circle
	void setRadius(double);
	double getRadius() const;

	//print to display the area and the perimeter of the circle
	void print() const;

	//calculate the area of the circle
	double area() const;

	//calculate the perimeter of the circle
	double perimeter() const;

	//constructor
	circle(double);
	circle();

private:
	//declare member variables
	double radius;
};

//Member function definitions of the class circle
//constructor
circle::circle(double a)
{
	radius = a;
}

circle::circle()
{
	radius = 0;
}

//set function will set the value of radius into the private member
void circle::setRadius(double x)
{
	// if x is greater than 0, radius is x
	// else if x is less than 0, radius is equal to 0 because 
	// the radius must be greater than 0
		radius = x;
}

//double function returns the value of radius
double circle::getRadius() const
{
	return radius;
}

//area function will compute and return the area of the circle
double circle::area() const
{
	return radius*radius*PI;
}

//perimeter function will compute and return the perimeter of the circle
double circle::perimeter() const
{
	return 2*radius*PI;
}

//print function will print the value of the area and perimeter of the circle
//if the radius is a positive number, else, display a message to prep the user that
//the redius of a circle must be a positive number
void circle::print() const
{
	// set the display setting where the results show 2 decimal precisions
	cout << fixed << showpoint;
	cout << setprecision(2);

	if (radius > 0)
	{
		cout << "With a circle with a radius of " << radius << " (unit)"
			 << ", the area of the circle is " << area()
			 << " (unit square), and the perimeter of the circle is " << perimeter()
			 << " (unit)" << endl << endl;		
	}
	else if (radius <= 0)
	{
		cout << "With the given radius is " << radius
		     << " (unit), the radius of a circle must be greater than 0 (unit)."
		     << endl << endl;				
	}	
}

#endif CIRCLE_H

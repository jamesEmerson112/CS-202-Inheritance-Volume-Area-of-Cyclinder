//cylinder.h

#ifndef CYLINDER_H
#define CYLINDER_H
#include "circle.h"
#include <iostream>

using namespace std;

//declare a class cyclinder drived from and has a base of HW 2
class cylinder : public circle
{
private:
	//declare member variables
	double height;

public:
	//declare member functions

	//construtors
	cylinder(double, double);
	cylinder();

	//set and get the radius and the height of the cylinder
	void setRadius(double);
	double getRadius() const;
	void setHeight(double);
	double getHeight() const;

	//calculate the area of the cylinder
	double area() const;

	//calculate the volume of the cylinder
	double volume() const;

	//print to display the area and the volume of the cylinder
	void print() const;
};

//member function definitions of the class circle
//constructor
cylinder::cylinder(double a, double b)
{
	circle::setRadius(a);
	height = b;
}

cylinder::cylinder()
{
	circle::setRadius(0);
	height = 0;
}

//void set function will set te value of radius into the private member
void cylinder::setRadius(double a)
{
	circle::setRadius(a);
}

//void set function will set the value of height into the private member
void cylinder::setHeight(double a)
{
	height = a;
}

//double function will return the value of radius
double cylinder::getRadius() const
{
	return circle::getRadius();
}

//double function will return the value of height
double cylinder::getHeight() const
{
	return height;
}

//area function will calculate and return the value of area of the cylinder
double cylinder::area() const
{
	return circle::area() * 2 + 2 * PI * circle::getRadius() * height;
}

//area function will calculate and return the value of area of the circle
double cylinder::volume() const
{
	return circle::area() * height;
}

//print function will print the value of the area and volume of the cylinder
//if the radius and height is greater than 0, else, display a message to 
//prep the user that the radius and height of a cylinder must be greater
//than 0
void cylinder::print() const
{
	cout << fixed << showpoint;
	cout << setprecision(2);
	if (circle::getRadius() > 0 && height > 0)
	{
		cout << "With a cylinder with a radius of " << circle::getRadius()
		     << " (unit) and the height of " << height
		     << " (unit),"
		     << endl << "the total area of the cylinder is " << area()
		     << " (unit square),"
		     << endl << "and the volume of the cylinder is " << volume()
		     << " (unit^3)" << endl << endl;
	}
	else if (circle::getRadius() <= 0 || height <= 0)
	{
		cout << "The given cylinder has the radius of " << circle::getRadius() << " (unit) and"
			 << " the height of " << height << " (unit)." << endl
			 << "My apologies. The radius and the height of the cylinder must be "
		     << "greater than 0 (unit)."
		     << endl << endl;
	}
}

#endif CYLINDER_H

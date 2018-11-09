
#include "Vehicle.h"
#include<iostream>
using namespace std;

Vehicle::Vehicle()
{
	color = "";
	licence = 0;

}
Vehicle::Vehicle(string color, int licence)
{
	this->color = color;
	this->licence = licence;

}

Vehicle::~Vehicle()
{
	color = "";
	licence = 0;

}

void Vehicle::set_color(string color)
{
	this->color = color;
}

string Vehicle::get_color()
{
	return color;
}

void Vehicle::set_license(int licence)
{
	this->licence = licence;
}

int Vehicle::get_licence()
{
	return licence;
}

void Vehicle::print()
{
	cout << "color: " << color << "\t" << "licence: " << licence << endl;

}

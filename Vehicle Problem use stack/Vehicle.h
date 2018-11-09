#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED
#include <string>
using namespace std;

class Vehicle
{
public:
	Vehicle();
	Vehicle(string, int);
	~Vehicle();
	void set_color(string);
	string get_color();
	void set_license(int);
	int get_licence();
	void print();

private:
	string color;
	int licence;

};
#endif // VEHICLE_H_INCLUDED

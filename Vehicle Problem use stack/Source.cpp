#include <iostream>
#include "Vehicle.h"
#include <stack>

using namespace std;
void runner_main()
{
	stack<Vehicle> vehicleList;
	Vehicle vehicle1("Red", 123451), vehicle2("White", 123452), vehicle3("Black", 123453), vehicle4("Blue", 123454), vehicle5("Green", 123455);
	vehicleList.push(vehicle1);
	vehicleList.push(vehicle2);
	vehicleList.push(vehicle3);
	vehicleList.push(vehicle4);
	vehicleList.push(vehicle5);
	for (int index = 1;index <= 5;index++)
	{
		cout << "Vehicle No." << index << " : ";
		vehicleList.top().print();
		vehicleList.pop();
	}

}

int main()
{
	runner_main();

	getchar();
	return 0;
}

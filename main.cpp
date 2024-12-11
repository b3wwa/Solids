#include "Solids.h"
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	//allocate memory for each solid
	Cuboid* cube = new Cuboid(2, 2, 2);
	Cuboid* rect = new Cuboid(3, 4, 5);
	Cylinder* cyl = new Cylinder(3, 2);
	Sphere* sphere = new Sphere(4);

	//construct vector
	vector<Solid*> v = {cube, rect, cyl, sphere};

	//loop through vector
	for (long unsigned int i = 0; i < v.size(); i++)
	{
		cout << fixed << setprecision(4)
			<< "Solid type: " << v.at(i)->getType() << endl
			<< "Volume: " << v.at(i)->getVolume() << endl
			<< "Surface Area: " << v.at(i)->getSurfaceArea() << endl << endl;
	}

	return 0;
}
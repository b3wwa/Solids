#include "Solids.h"
#include <cmath>

//Solid (base class)
Solid::Solid(string _solidType)
{
	solidType = _solidType;
}

string Solid::getType()
{
	return solidType;
}

//Cuboid
Cuboid::Cuboid(double w, double l, double h) : Solid("Cuboid")
{
	width = w;
	length = l;
	height = h;
}

double Cuboid::getVolume()
{
	return width * length * height;
}

double Cuboid::getSurfaceArea()
{
	return 2 * ((width * length) + (height * length) + (height * width));
}

//Cylinder
Cylinder::Cylinder(double h, double r) : Solid("Cylinder")
{
	height = h;
	radius = r;
}

double Cylinder::getVolume()
{
	return PI * pow(radius, 2) * height;
}

double Cylinder::getSurfaceArea()
{
	return (2 * PI * radius * height) + (2 * PI * pow(radius, 2));
}

//Sphere
Sphere::Sphere(double r) : Solid("Sphere")
{
	radius = r;
}

double Sphere::getVolume()
{
	return 4.0 / 3.0 * PI * pow(radius, 3);
}

double Sphere::getSurfaceArea()
{
	return 4 * PI * pow(radius, 2);
}
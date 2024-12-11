#pragma once
#include <iostream>
using namespace std;

class Solid
{
public:
	Solid(string _solidType);
	virtual double getVolume();
	virtual double getSurfaceArea();
	string getType();

protected:
	string solidType;
};

class Cuboid : public Solid
{
public:
	Cuboid(double w, double l, double h);
	double getSurfaceArea();

private:
	double width, length, height;
};

class Cylinder : public Solid
{
public:
	Cylinder(double h, double r);
	double getVolume();
	double getSurfaceArea();

private:
	double height, radius;
	const double PI = 3.14159265359;
};

class Sphere : public Solid
{
public:
	Sphere(double r);
	double getVolume();
	double getSurfaceArea();

private:
	double radius;
	const double PI = 3.14159265359;
};
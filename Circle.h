#pragma once
#define PI 3.14

#include<iostream>
#include<string>
#include<iomanip>
#include<sstream>

using std::cout, std::endl;
using std::string, std::stof;
using std::setprecision, std::fixed;
using std::stringstream;

class Circle
{
private:
	float _radium;
public:
	Circle();
	Circle(float);
	~Circle();
public:
	float Radium();
	void setRadium(float);

public:
	float Diameter();
	float Area();
};


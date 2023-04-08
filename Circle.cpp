#include "Circle.h"

//constructure, destructure
Circle::Circle() {
	_radium = 0;
}
Circle::Circle(float radium) {
	_radium = radium;
}
Circle::~Circle() {
	return;
}

// function get set
float Circle::Radium() {
	return _radium;
}

void Circle::setRadium(float radium) {
	_radium = radium;
}

// onother function

/// <summary>
/// calculate the Diameter of the Circle rounded 1 decimal
/// </summary>
/// <returns>Diameter rounded 1 decimal</returns>
float Circle::Diameter() {
	float diameter;
	diameter = _radium * PI;
	return diameter;
}

/// <summary>
/// calculate the Area of the Circle rounded 2 decimal
/// </summary>
/// <returns>Area rounded 2 decimal</returns>
float Circle::Area() { 
	float area;
	area = _radium * _radium * PI;
	stringstream builder;
	builder << setprecision(2) << fixed << area;
	cout << builder.str() << endl;
	area = stof(builder.str());
	return area;
}
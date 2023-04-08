#pragma once
class Rectangle
{
private:
	float _weight;
	float _height;

public:
	Rectangle();
	Rectangle(float, float);
	~Rectangle();
public:
	float Weight();
	float Height();
	void setWeight(float);
	void setHeight(float);

public:
	float Diameter();
	float Area();

};


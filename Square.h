#pragma once
class Square
{
private:
	float _edge;
public:
	Square();
	Square(float);
	~Square();

public:
	float Edge();
	float setEdge(float);
public:
	float Diameter();
	float Area();
};


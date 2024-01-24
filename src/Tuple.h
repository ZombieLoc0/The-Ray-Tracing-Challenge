#pragma once
class Tuple
{
private:
	float _x;
	float _y;
	float _z;
	float _w;

public:

	Tuple() {};

	Tuple(float x, float y, float z, float w)
	{
		this->_x = x;
		this->_y = y;
		this->_z = z;
		this->_w = w;
	}

	~Tuple() {};

	float x() const { return this->_x; }
	float y() const { return this->_y; }
	float z() const { return this->_x; }
	float w() const { return this->_w; }

	static Tuple vector(float x, float y, float z);
	static Tuple point(float x, float y, float z);

	static bool isVector(Tuple vector);
	static bool isPoint(Tuple point);


};


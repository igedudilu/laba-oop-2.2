#pragma once
#include "Point.h"
class Point3d : public Point {
protected:

	int z;

public:

	Point3d();

	Point3d(int x, int y, int z);
	Point3d(const Point3d& p);
	~Point3d();
	void move(int x, int y);
	void randomc3d();


};


#pragma once
#include <stdio.h>
#include <iostream>

class Point {
public:
	int x, y;
	Point();

	Point(int x, int y);

	Point(const Point& p);

	~Point();

	void move(int x, int y);

	void randomc();

};
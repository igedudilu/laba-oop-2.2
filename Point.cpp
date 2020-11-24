#include "Point.h"
Point::Point() {
	printf("Point()\n");
	x = 0;
	y = 0;
}
Point::Point(int x, int y) {
	printf("Point(int x, int y)\n");
	this->x = x;
	this->y = y;
}
Point::Point(const Point& p) {
	printf("Point(const Point&p)\n");
	x = p.x;
	y = p.y;
}
void Point::move(int x, int y) {
	this->x += x;
	this->y += y;
}
Point::~Point() {
	printf("%d, %d\n", x, y);
	printf("~Point()\n");
}

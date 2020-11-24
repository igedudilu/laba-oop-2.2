#include "Point3d.h"
Point3d::Point3d():Point() {
	printf("Point3d()\n");
	z = 0;
}
Point3d::Point3d(int x, int y, int z) : Point(x, y) {
	printf("Point3d(int x, int y, int z)\n");
	this->z = z;
}

Point3d::Point3d(const Point3d& p) {
	printf("Point3d(const Point3d&p)\n");
	x = p.x;
	y = p.y;
	z = p.z;
}
Point3d::~Point3d() {
	printf("~Point3d()\n");
	printf("%d, %d, %d\n", x, y, z);

}
void Point3d::move(int x, int y) {
	this->x += x;
	this->y += y;
	this->z += z;
}
void Point3d::randomc3d() {
	y = rand() % 20;
	x = rand() % 20;
	z = rand() % 20;
}
#include <iostream>
#include <conio.h>
using namespace std;

class Point {
public:
	int x, y;
	Point() {
		printf("Point()\n");
		x = 0;
		y = 0;
	}
	Point(int x, int y) {
		printf("Point(int x, int y)\n");
		this->x = x;
		this->y = y;
	}
	Point(const Point& p) {
		printf("Point(const Point&p)\n");
		x = p.x;
		y = p.y;
	}
	~Point() {
		printf("~Point()\n");
		printf("%d, %d\n", x, y);
		
	}
	void move(int x, int y) {
		this->x += x;
		this->y += y;
	}
	void randomc();

};

void Point::randomc() {
	y = rand() % 20;
	x = rand() % 20;
}

class Point3d : public Point {
protected:

	int z;

public:

	Point3d(): Point() {
		printf("Point3d()\n");
		z = 0;
	}
	Point3d(int x, int y, int z) : Point(x,y) {
		printf("Point3d(int x, int y, int z)\n");
		this->z = z;
	}
	Point3d(const Point3d& p) {
		printf("Point3d(const Point3d&p)\n");
		x = p.x;
		y = p.y;
		z = p.z;
	}
	~Point3d() {
		printf("~Point3d()\n");
		printf("%d, %d, %d\n", x, y, z);
		
	}
	void move(int x, int y) {
		this->x += x;
		this->y += y;
		this->z += z;
	}
	void randomc3d() { 
		y = rand() % 20;
		x = rand() % 20;
		z = rand() % 20;
	}


};

class test : Point {

};

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "создание потомков\n";
	{
		Point3d* p = new Point3d;
		Point3d* p2 = new Point3d(10, 20, 30);
		Point3d* p3 = new Point3d(*p2);
		delete p;
		delete p2;
		delete p3;
	
	}
	cout<<"Конец"<<endl<<endl;


	cout << "помещение в базовый класс потомка\n";
	{
		Point* p = new Point3d(10, 20, 30);
		
		delete p;
	}
	cout << "Конец" << endl << endl;


	{cout << "TEEEEEEEEEEESSSSSSSSTTT\n";
	
	test t;
		
	}
	cout << "Конец" << endl << endl;

	return 0;

}

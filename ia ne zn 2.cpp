#include <iostream>
#include <conio.h>
using namespace std;
#include "Point.h"
#include "Point3d.h"
#include "test.h"

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

#include <iostream>
#include <cmath>
#include "point.h"

using namespace std;

float distance(Point p1,Point p2)
		{
			float xP = pow((p2.getX()-p1.getX()),2.0);
			float yP = pow((p2.getY()-p1.getY()),2.0);
			return sqrt(xP + yP);
		}

int main(int argc, char** argv) {
	
	Point p1 =Point(1.0,2.0);
	Point p2 =Point(5.5,8.0);
	cout<<distance(p1,p2);
	return 0;
}

// nie dzia³a w Dev C++ dlaczego???

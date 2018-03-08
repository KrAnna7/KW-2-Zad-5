#ifndef POINT_H
#define POINT_H

class Point{
	private:
		float x,y;
	public:
		Point(float x,float y);
		Point(float x);
		float getX();
		float getY();
		void move(Point p);
};

#endif // POINT_H

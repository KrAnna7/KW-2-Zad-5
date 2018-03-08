#include "point.h"

Point::Point(float x, float y){
			this->x =x;
			this->y =y;
		}
		Point::Point(float x)
		{
			this->x=x;
			y=0.0;
		}
		float Point::getX()
		{
			return x;
		}
		float Point::getY()
		{
			return y;
		}
		void Point::move(Point p)
		{
			x+=p.getX();
			y+=p.getY();
		}

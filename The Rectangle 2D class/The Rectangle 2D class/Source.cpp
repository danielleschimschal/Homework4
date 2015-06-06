#include <iostream>
using namespace std;

class Rectangle2D
{
public:
	double x, y;
	double width, height;

	Rectangle2D(){
		(x, y) = (0, 0);
		width = 1;
		height = 1;
	}

	Rectangle2D(double newx, double newy, double newwidth, double newheight){
		x = newx;
		y = newy;
		width = newwidth;
		height = newheight; 
	}

	double getx(){
		return x;
	}
	double gety(){
		return y;
	}	
	double getwidth(){
		return width;
	}
	double getheight(){
		return height;
	}

	double getArea(){
		double area = width*height;
		return area; 
	}

	double getPerimeter(){
		double perimeter = 2 * width + 2 * height;
		return perimeter; 
	}

	bool contains(double x, double y){
		getwidth();
		getheight();

		if (width > x && height > y)
		{
			return true;
		}
		else
			return false; 
	}

	bool contains(const Rectangle2D &r)
	{
		if (width > x && height > y)
			return true;
		else
			return false;
	}
	bool overlaps(const Rectangle2D &r){
		if (width > x || height > y)
			return true;
		else
			return false;
	}
	

};

int main(){

	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4); 

	cout << "Area of rectangle: " << r1.getArea() << endl;
	cout << "Perimeter of rectangle: " << r1.getPerimeter() << endl; 
	cout << r1.contains(3,3) << endl; 
	cout << r1.contains(r2) << endl;
	cout << r1.overlaps(r3) << endl; 
	
}
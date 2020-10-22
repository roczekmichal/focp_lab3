#include <iostream>
#include <array>
#include <cstdlib>

//Define a struct
struct point2D
{
	double x;
	double y;

};

point2D create_point() {
	point2D temp;
	temp.x = rand() % 10;
	temp.y = rand() % 10;
	return temp;
}

void create_in_place(point2D & point) {
	point.x = rand() % 10;
	point.y = rand() % 10;
}


int main()
{
	//Declare a variable with struct
	point2D mypoint=create_point();


	//Print its content
	std::cout<<"Value of x:" << mypoint.x << std::endl;
	std::cout<<"Value of y:" << mypoint.y << std::endl;

	point2D empty_point;
	create_in_place(empty_point);

	std::cout << "Value of x:" << empty_point.x << std::endl;
	std::cout << "Value of y:" << empty_point.y << std::endl;

	return 0;
}


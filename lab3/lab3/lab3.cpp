#include <iostream>
#include <array>


//Define a struct
struct point2D
{
	double x;
	double y;

};


int main()
{
	//Declare a variable with struct
	point2D mypoint;
	//Initialize its members
	mypoint.x = 3.3;
	mypoint.y = 4;

	//Print its content
	std::cout<<"Value of x:" << mypoint.x << std::endl;
	std::cout<<"Value of y:" << mypoint.y << std::endl;


	return 0;
}


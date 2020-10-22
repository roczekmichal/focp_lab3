#include <iostream>
#include <array>
#include <cstdlib>
#include <array>
#include <cmath>

//Define a struct
struct point2D
{
	double x;
	double y;

};

point2D create_point() {
	point2D temp;
	temp.x = rand() % 20;
	temp.y = rand() % 20;
	return temp;
}

//Pass by reference (using &)
void create_in_place(point2D & point) {
	point.x = rand() % 10;
	point.y = rand() % 10;
}


float distance(point2D lhs, point2D rhs) {
	return sqrt(pow((rhs.x - lhs.x), 2) + pow((rhs.y - lhs.y), 2));
}




int main()
{
	/*
	//Declare a variable with struct
	point2D mypoint=create_point();


	//Print its content
	std::cout<<"Value of x:" << mypoint.x << std::endl;
	std::cout<<"Value of y:" << mypoint.y << std::endl;

	point2D empty_point;
	create_in_place(empty_point);

	std::cout << "Value of x:" << empty_point.x << std::endl;
	std::cout << "Value of y:" << empty_point.y << std::endl;
	*/

	std::array<point2D, 10>points;

	for (int i = 0; i < 10; i++)
	{
		points[i] = create_point();
	}
		
		
	for (int i = 0; i < 10; i++)
	{
		std::cout << "point[ " << i << " ] = (" << points[i].x << ", " << points[i].y << ")" << std::endl;
	}
	

	float latgest_distance = 0.0;
	point2D first, second;

	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			float dist = distance(points[i], points[j]);
			if (dist >= latgest_distance)
			{
				latgest_distance = dist;
				first = points[i];
				second = points[j];
			}
		}
	}

	std::cout << "The largest distance is: " << latgest_distance << std::endl;
	std::cout << "First point: (" << first.x << ", " << first.y << ")" << std::endl;
	std::cout << "First point: (" << second.x << ", " << second.y << ")" << std::endl;
	


	return 0;
}


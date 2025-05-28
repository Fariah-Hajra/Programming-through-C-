#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    float x, y;
};

float calculateDistance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() 
{
	cout<<"Fariah Hajra F24605037\n";
	cout<<"Task 08 :Distance between points\n\n";
    Point p1, p2;

    cout << "Enter coordinates for point 1 (x y): ";
    cin >> p1.x >> p1.y;

    cout << "Enter coordinates for point 2 (x y): ";
    cin >> p2.x >> p2.y;

    float distance = calculateDistance(p1, p2);

    cout << "The distance between the two points is: " << distance << endl;

    return 0;
}
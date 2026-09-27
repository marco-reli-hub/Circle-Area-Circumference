// 9. Write a code that will input for the diameter of a circle, compute and display the area and circumference of a circle.

#include <iostream>
using namespace std;

int main() 
{
    const double PI = 3.1416;
    double diameter, radius, area, circumference;
    
    cout << "Enter the diameter of the circle: ";
    cin >> diameter;
    
    radius = diameter / 2;
    area = PI * radius * radius;
    circumference = PI * radius;
    
    cout << endl;
    cout << "Area           :  " << area << endl;
    cout << "Circumference  :  " << circumference << endl;
    
    return 0;
}

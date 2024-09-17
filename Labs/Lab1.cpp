#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    //PART 1
    int first = 10, second = 20;

    //PART 2
    int a = 10, b = 20, sum = a + b;
    cout << "The sum is " << sum;

    //PART 3
    double myNumber = 13.6;

    //PART 4
    float myFloat = 3.12;
    int myInt = 3;
    double myDouble = 3.14159;

    //PART 5
    char grade = 'A';

    //PART 6
    float temp1 = 98.6, temp2 = 72.4, temp3 = temp1 + temp2 / 2;
    cout << "\n The average temperature is " << temp3;

    //PART 7
    int counter = 10;
    float distance = 5.25;

    //PART 8
    double side1 = 3.0, side2 = 4.0, hypotenuse;
    hypotenuse = sqrt(a*a + (b*b));
    cout << "\n Hypotenuse is " << hypotenuse;

    //PART 9
    double feet = 5.11;
    double metersPerFoot = 0.3048;
    double Meters = feet*metersPerFoot;
    cout << "\n Meters " << Meters;

    //PART 10
    int circunference = 14;
    const float pi = 3.14;

    cout << "\n The diameter of the circle of " << circunference << " is " << circunference/(pi*2);
}
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a , b , c , d , x , z , e , y, w;
    float result;

    //2?       QUESTION 1                                 
    a = 25, b = 2, c = 3, d = 4;

    result = sqrt(a) + (pow(b,3)) - abs(c - b) + pow(d,2);
    cout << "\n This is the result 1: " << result;

    //2?       QUESTION 2                                 
    a = 16, b = 3, c = 9, d = 4, e = -5;

    result = log10(a) + pow(b,2) - (sqrt(c) * d) + abs(e);
    cout << "\n This is the result 2: " << result;

    //2?       QUESTION 3                                 
    a = 16, b = 2, c = 7, d = 3, e = 5;

    result = (pow(b,3) / sqrt(a)) + abs(c - d) - pow(e, 2);
    cout << "\n This is the result 3: " << result;

    //2?       QUESTION 4                                 
    x = 0, y = M_PI / 2, z = 0, w = 16;

    result = sin(x) + cos(y) + tan(z) - sqrt(w);
    cout << "\n This is the result 4: " << result;

    //2?       QUESTION 5                                 
    x = 3, y = 2, z = 9;

    result = pow(x,2) - (pow(y,3) / sqrt(z)) + log10(w) * abs(x - y);
    cout << "\n This is the result 5: " << result;
}
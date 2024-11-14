#include<iostream>
using namespace std;

int main()
{
        int a = 5, b = 10; 
        int results = a++ + ++b - ++a;
        cout << ++results << endl;

    return 0;
}

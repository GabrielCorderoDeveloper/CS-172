
#include <iostream>
using namespace std;
#include <cmath>

int main() {
    //Question 10
    int c;
    for(int a = 1; a <= 20 ; a++){
        for(int b = a; b <= 20; b++){
            for(int c = a; c <= 20; c++) {
                if(a*a + b*b == c*c) {
                    cout << a << ' ' << b << ' ' << c << endl;
                }
            }            
        }
    }
    return 0;
}
        
    /*
    //Question 9
    int sum = 0, number;
    cout << "Enter a number" << endl;
    cin >> number;
    for (int i = 0; i <= number; i++)
    {
        sum += i;
    }
    cout << sum << endl;

    //Question 8
    for (int i = 0; i <= 5; i++)
    {
        cout << pow(3, i) << endl;
    }

    return 0;

    //Question 7 ------------------------------
    int  sum = 0;
    for (int i = 0; i <= 20; i++)
    {
        if(i % 2 != 0) {
            sum += i;
            cout << i << endl;
        }
    }

    cout << sum;

    return 0;

    //Question 6 ------------------------------
    for (int i = 10; i >= 1; i--)
    {
        cout << i << endl;
    }

    return 0;
    */


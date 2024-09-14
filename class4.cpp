#include<iostream>
#include<cmath>
using namespace std;

// int main()
// {
//     int a = 9, b = 4, c = 2, results; 
//     results = pow(a,c) + (log10(100) + 8) * b;

//     cout << "results " << results;
//     return 0;
// }
int main()
{
    double angle = M_PI/2, results; 
    results = sin(angle * 2) + (cos(angle) + 5) * 3;

    cout << "results " << results;
    return 0;
}


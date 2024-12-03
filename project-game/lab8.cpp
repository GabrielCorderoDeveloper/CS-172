#include <iostream> 
using namespace std;

// Question 6
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Question 7
bool isEven(int n) {
    return n % 2 == 0;
}

// Question 8
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Question 9
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Question 10
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    // Question 6
    cout << max(10, 20) << endl;

    // Question 7
    for (int i = 1; i <= 10; ++i) {
        cout << i << " is " << (isEven(i) ? "even" : "odd") << endl;
    }

    // Question 8
    for (int i = 0; i < 10; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    // Question 9
    int arr[] = {1, 2, 3, 4, 5};
    cout << sumArray(arr, 5) << endl;

    // Question 10
    for (int i = 1; i <= 50; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

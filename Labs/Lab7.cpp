#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    //~QUESTION     9    ---------------------------->
    srand(static_cast<unsigned int>(time(0))); 
    int randomNumber = rand() % 50 + 1;      
    int guess;                              

    cout << "Guess the number (between 1 and 50): " << endl;

    do {
        cin >> guess; 

        if (guess < randomNumber) {
            cout << "Too low! Try again: " << endl;
        } else if (guess > randomNumber) {
            cout << "Too high! Try again: " << endl;
        } else {
            cout << "Congratulations! You guessed the number: " << randomNumber << endl;
        }
    } while (guess != randomNumber); 

    return 0;

    /*
    //~QUESTION     8    ---------------------------->
    int n; 
    int factorial = 1; 
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    int i = 1; 
    do {
        factorial *= i; 
        i++;           
    } while (i <= n);  

    cout << "The factorial of " << n << " is: " << factorial << endl;
    return 0;

    //~QUESTION     7    ---------------------------->
    int number; 

    do {
        cout << "Enter a positive integer: ";
        cin >> number; 

        if (number <= 0) {
            cout << "Error: Please enter a positive integer!" << endl;
        }
    } while (number <= 0); 

    cout << "You entered: " << number << endl; 
    return 0;

    //~QUESTION     6    ---------------------------->
    int num = 1; 

    do {
        cout << num << endl; 
        num++;               
    } while (num <= 5);       

    return 0;  */
}
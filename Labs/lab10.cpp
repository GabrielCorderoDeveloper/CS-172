#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    //~QUESTION     1    ---------------------------->
    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];

    // cout << "Enter " << n << " numbers: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // int largest = arr[0], smallest = arr[0];
    // for (int i = 1; i < n; i++) {
    //     if (arr[i] > largest) largest = arr[i];
    //     if (arr[i] < smallest) smallest = arr[i];
    // }

    // cout << "Largest number: " << largest << endl;
    // cout << "Smallest number: " << smallest << endl;

    // return 0;

    //~QUESTION     2    ---------------------------->
    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];

    // cout << "Enter " << n << " elements: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // cout << "Array in reverse: ";
    // for (int i = n - 1; i >= 0; i--) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // return 0;

    //~QUESTION     3    ---------------------------->
    //  int arr[3][3];
    // cout << "Enter 9 elements for the 3x3 matrix: " << endl;
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << "Row sums: ";
    // for (int i = 0; i < 3; i++) {
    //     int rowSum = 0;
    //     for (int j = 0; j < 3; j++) {
    //         rowSum += arr[i][j];
    //     }
    //     cout << rowSum << " ";
    // }
    // cout << endl;

    // cout << "Column sums: ";
    // for (int j = 0; j < 3; j++) {
    //     int colSum = 0;
    //     for (int i = 0; i < 3; i++) {
    //         colSum += arr[i][j];
    //     }
    //     cout << colSum << " ";
    // }
    // cout << endl;

    // return 0;
    //~QUESTION     4    ---------------------------->
    // int mat1[2][2], mat2[2][2], result[2][2] = {0};

    // cout << "Enter 4 elements for the first 2x2 matrix: ";
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cin >> mat1[i][j];
    //     }
    // }

    // cout << "Enter 4 elements for the second 2x2 matrix: ";
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cin >> mat2[i][j];
    //     }
    // }

    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         for (int k = 0; k < 2; k++) {
    //             result[i][j] += mat1[i][k] * mat2[k][j];
    //         }
    //     }
    // }

    // cout << "Resulting matrix: " << endl;
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cout << result[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // return 0;
    //~QUESTION     5    ---------------------------->
    int arr[3][3], rotated[3][3];
    cout << "Enter 9 elements for the 3x3 matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Rotate 90 degrees clockwise
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rotated[j][2 - i] = arr[i][j];
        }
    }

    cout << "Original matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Rotated matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
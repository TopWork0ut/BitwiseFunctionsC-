#include <iostream>

using namespace std;


int findNonDouplicateInArray(int arr[], int count) {
    int result = 0;

    for (int i = 0; i < count; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int arr[] = {4, 2, 5, 17, 17, 9, 2, 2, 5, 2, 4};
//   non duplicate value from array is 9
    int count = sizeof(arr) / sizeof(int);
    cout << "Non duplicate value is " << findNonDouplicateInArray(arr, count) << endl;
//  gives 9
    return 0;
}


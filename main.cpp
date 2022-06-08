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

















//int findOdd(int arr[], int n)
//{
//    int res = 0, i;
//    for (i = 0; i < n; i++)
//        res ^= arr[i];
//        cout << res << endl;
//    return res;
//}

// Driver Method
//int main(void) {
//    int arr[] = { 12, 12, 14, 90, 14, 14, 14,19 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    cout << "The odd occurring element is  "<< findOdd(arr, n);
//    return 0;
//}

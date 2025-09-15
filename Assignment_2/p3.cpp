#include <iostream>
using namespace std;

int findMissingBinary(int arr[], int n) {
    int low = 0, high = n - 2; 
    while (low <= high) {
        int mid = (low + high) ;

        if (arr[mid] == mid + 1) {
            // Left part is correct, go right
            low = mid + 1;
        } else {
            // Mismatch found, go left
            high = mid - 1;
        }
    }
    return low + 1; // Missing number
}

int main() {
    int arr[] = {1, 2, 3, 5, 6, 7}; // Example, n = 7
    int n = 7;

    cout << "Missing number (Binary Search): " << findMissingBinary(arr, n) << endl;
    return 0;
}

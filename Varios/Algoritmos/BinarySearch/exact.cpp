#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//find if an exact value is present in a vector
//Time complexity: O(log(n))

int binarySearch(vector<int> &arr, int x) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;
        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;
        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }
    // If we reach here, then element was not present
    return -1;
}

int main() {
    vector<int> arr = { 2, 3, 4, 10, 40 };
    int x = 10;
    int result = binarySearch(arr, x);
    if(result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
    cout<<endl;
    //--------------------------------------------------------------
    // THE COMPLEATE RETURNS THE INDEX THE SIMPLE ONLY RETURNS A BOOL
    bool count = binary_search(arr.begin(), arr.end(), x);
    if(count) cout<<"found";
    else cout<<"not found";

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm> // Required for std::sort

using namespace std;
int binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] == target) {
            return mid; // Target found, return index
        }
        if (arr[mid] < target) {
            low = mid + 1; // Search the right half
        } else {
            high = mid - 1; // Search the left half
        }
    }
    return -1; // Target not found
}

int main() {
    int size, target;
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    vector<int> arr(size);
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << "\nSorted array (Binary Search requirement): ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Enter the number to search for: ";
    cin >> target;
    int result = binarySearch(arr, target);
    if (result != -1) {
        cout << "Element " << target << " found at sorted index " << result << "." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}

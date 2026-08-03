#include <iostream>
#include <vector>

using namespace std;

int linearSearch(const vector<int>& arr, int target) {
   
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if the target is not in the array
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


    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the number to search for: ";
    cin >> target;
    int resultIndex = linearSearch(arr, target);

    if (resultIndex != -1) {
        cout << "Element found at index: " << resultIndex << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

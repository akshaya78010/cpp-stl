#include <iostream>
#include <vector>
#include <algorithm>  // Needed for remove, max_element, min_element, count, and accumulate
#include <numeric>    // Needed for accumulate
using namespace std;

// Function to print a vector
void print(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    vector<int> arr(n);

    // Reading values into the vector
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 1.) count(): Counts the occurrences of a specific value in the vector.
    int count1 = count(arr.begin(), arr.end(), 1);
    cout << "Count of 1 in the vector: " << count1 << endl;

    // 2.) accumulate(): Accumulates the sum of all elements in the vector.
    int sum = accumulate(arr.begin(), arr.end(), 0);  // Default operation is sum
    cout << "Sum of elements in the vector: " << sum << endl;

    // Accumulate product of all elements in the vector.
    int product = accumulate(arr.begin(), arr.end(), 1, multiplies<int>());  // Multiplies elements
    cout << "Product of elements in the vector: " << product << endl;

    // 3.) max_element(): Finds the maximum element in the vector.
    auto max_elem = *max_element(arr.begin(), arr.end());
    cout << "Maximum element in the vector: " << max_elem << endl;

    // 4.) min_element(): Finds the minimum element in the vector.
    auto min_elem = *min_element(arr.begin(), arr.end());
    cout << "Minimum element in the vector: " << min_elem << endl;

    // 5.) equal(): Checks if two vectors are equal element-wise.
    vector<int> brr(arr);  // Copy of arr
    bool are_equal = equal(arr.begin(), arr.end(), brr.begin());
    cout << "Are arr and brr equal? " << (are_equal ? "Yes" : "No") << endl;

    // 6.) remove(): Logically removes all occurrences of a value (5) in the vector
    auto new_end = remove(arr.begin(), arr.end(), 5);  // Remove value 5
    arr.erase(new_end, arr.end());  // Physically resize the vector

    // Print vector after removal
    cout << "Vector after removing all occurrences of 5: ";
    print(arr);

    //-------------------------------------------------------------------------------------------------------------------
    // INSERTING ELEMENTS INTO A VECTOR

    // 1.) push_back(): Add elements to the end of the vector.
    arr.push_back(29);

    // 2.) emplace_back(): Inserts an element at the end, directly constructing it.
    arr.emplace_back(60);

    // 3.) insert(): Insert elements at a specific position.
    arr.insert(arr.begin() + 3, 4);  // Inserts 4 at index 3

    // 4.) emplace(): Constructs an element in place at a specific position.
    arr.emplace(arr.begin() + 2, 40);  // Inserts 40 at index 2

    // 5.) assign(): Replaces the current content of the vector with new elements.
    arr.assign(15, 100);  // Replaces elements with 15 copies of 100
    brr.assign(arr.begin(), arr.end());

    print(arr);
    print(brr);
//vector<vector<int>> vec(3, vector<int>(4, 0));
    //-------------------------------------------------------------------------------------------------------------------
    // DELETING ELEMENTS FROM A VECTOR

    // 1.) pop_back(): Remove the last element.
    arr.pop_back();

    // 2.) erase(): Remove elements by position or by range.
    arr.erase(arr.begin() + 1);  // Removes the element at index 1

    // Erase a range of elements.
    arr.erase(arr.begin() + 1, arr.begin() + 4);  // Removes elements from index 1 to 3

    // Erase all occurrences of 100.
    arr.erase(remove(arr.begin(), arr.end(), 100), arr.end());  // Removes all occurrences of 100

    cout << "Final vector after all operations: ";
    print(arr);

    return 0;
}

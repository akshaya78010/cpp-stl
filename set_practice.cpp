#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    set<int> arr;

    // Inserting elements into the set
    for (int i = 0; i <= 10; i++) {
        arr.insert(i);  // Insert elements from 0 to 10
    }

    // 1. Erasing elements
    // Erasing the first element
    arr.erase(arr.begin());  // Removes the first element (0 in this case)

    // Erasing elements in a range
    auto ite1 = arr.begin();
    auto ite2 = next(arr.begin(), 3);  // Set iterator for the next 3 elements
    arr.erase(ite1, ite2);  // Erases the first three elements

    // Reinserting some elements
    for (int i = 1; i <= 3; i++) {
        arr.insert(i);  // Reinserts 1, 2, 3
    }

    // Display the elements of the set
    cout << "Current elements in the set: ";
    for (auto each : arr) {
        cout << each << " ";  // Prints the current elements of the set
    }
    cout << endl;

    // 2. find() - To find an element in the set
    auto findy = arr.find(7);  // Searches for the element '7'
    if (findy != arr.end()) {
        cout << "Element found at position: " << distance(arr.begin(), findy) << endl;
    } else {
        cout << "Element not found" << endl;
    }

    // 3. size() - Returns the number of elements in the set
    cout << "Size of the set: " << arr.size() << endl;

    // 4. empty() - Checks if the set is empty
    cout << "Is the set empty? " << (arr.empty() ? "Yes" : "No") << endl;

    // 5. count() - Checks if an element is in the set (returns 1 if present, 0 if not)
    cout << "Count of element 6: " << arr.count(6) << endl;

    // 6. swap() - Swap the contents of two sets
    set<int> brr = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    arr.swap(brr);  // Swap the contents of arr and brr

    // Print swapped sets
    cout << "Contents of arr after swap: ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Contents of brr after swap: ";
    for (auto i : brr) {
        cout << i << " ";
    }
    cout << endl;

    // Use brr for further operations as arr has been swapped

    // 7. Set Union without inbuilt functions
    set<int> crr = {11, 12, 13, 14, 15, 16, 17, 18};
    auto union_set = arr;  // Create a new set for the union
    union_set.insert(crr.begin(), crr.end());  // Union of arr and crr
    cout << "Union of arr and crr: ";
    for (auto i : union_set) {
        cout << i << " ";
    }
    cout << endl;

    // 8. Set Union with inbuilt function
    vector<int> array;  // Vector to store union results
    set_union(brr.begin(), brr.end(), crr.begin(), crr.end(), back_inserter(array));
    cout << "Set union using inbuilt function: ";
    for (auto i : array) {
        cout << i << " ";
    }
    cout << endl;

    // 9. Set Intersection with inbuilt function
    vector<int> brray;  // Vector to store intersection results
    set_intersection(arr.begin(), arr.end(), crr.begin(), crr.end(), back_inserter(brray));
    cout << "Set intersection using inbuilt function: ";
    for (auto i : brray) {
        cout << i << " ";
    }
    cout << endl;

    // 10. upper_bound() and lower_bound() - Find upper and lower bounds of a specific element
    auto iter1 = arr.upper_bound(5);  // Returns iterator to first element greater than 5
    auto iter2 = arr.lower_bound(5);  // Returns iterator to first element not less than 5

    cout << "Upper bound of 5: " << *iter1 << endl;
    cout << "Lower bound of 5: " << *iter2 << endl;

    // 11. Multiset creation - Convert a vector into a multiset
    vector<int> drr = {1, 2, 3, 4, 5, 5, 5, 6, 77, 3, 3};
    multiset<int> sumati(drr.begin(), drr.end());  // Multiset can store duplicates

    // Display multiset elements
    cout << "Contents of multiset: ";
    for (auto i : sumati) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

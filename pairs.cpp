#include <iostream>
#include <utility> // for std::pair and std::make_pair
#include <string>  // for std::string

int main() {
    // Creating pairs
    std::pair<int, std::string> p1 = {1, "Hello"};
    std::pair<int, std::string> p2(2, "World");

    // Accessing elements of a pair
    std::cout << "Pair 1: " << p1.first << ", " << p1.second << std::endl;
    std::cout << "Pair 2: " << p2.first << ", " << p2.second << std::endl;

    // Using std::make_pair
    auto p3 = std::make_pair(3, "C++");
    std::cout << "Pair 3: " << p3.first << ", " << p3.second << std::endl;

    // Comparing pairs
    if (p1 < p2) {
        std::cout << "Pair 1 is less than Pair 2" << std::endl;
    } else {
        std::cout << "Pair 1 is not less than Pair 2" << std::endl;
    }

    // More comparisons
    std::pair<int, int> p4 = {1, 2};
    std::pair<int, int> p5 = {1, 3};
    std::cout << "Comparing p4 and p5: " << (p4 < p5) << std::endl; // Output: true

    // Modifying pairs
    p1.first = 10; // Changing the first element of p1
    p1.second = "Updated"; // Changing the second element of p1
    std::cout << "Updated Pair 1: " << p1.first << ", " << p1.second << std::endl;

    return 0;
}

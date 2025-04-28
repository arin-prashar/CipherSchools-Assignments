#include <iostream>
#include <vector>

int main() {
    std::vector<int> dynamicArray;

    int numElements;
    std::cout << "Enter the number of elements you want to store in the vector: ";
    std::cin >> numElements;

    dynamicArray.resize(numElements);

    std::cout << "Enter " << numElements << " elements: " << std::endl;
    for (int i = 0; i < numElements; ++i) {
        std::cin >> dynamicArray[i];
    }

    std::cout << "The elements in the vector are: ";
    for (const int& element : dynamicArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    int newElement;
    std::cout << "Enter a new element to add to the vector: ";
    std::cin >> newElement;
    dynamicArray.push_back(newElement);

    std::cout << "The updated vector is: ";
    for (const int& element : dynamicArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}

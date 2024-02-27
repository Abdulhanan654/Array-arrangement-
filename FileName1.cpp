#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Read the size of the array
    int n;
    cin >> n;

    // Dynamically allocate memory for the input array
    int* array = new int[n];
    int index = 0; // Initialize an index for the rearranged array

    // Create a vector to store the rearranged array
    vector<int> rearranged(n);

    // Input elements into the array
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Rearrange the array so that even numbers appear before odd numbers
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            // Place even numbers at the current index in the rearranged array
            rearranged[index] = array[i];
            index++; // Move to the next position in the rearranged array
        }
    }

    // Continue rearranging to place odd numbers after even numbers
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 != 0) {
            // Place odd numbers at the current index in the rearranged array
            rearranged[index] = array[i];
            index++; // Move to the next position in the rearranged array
        }
    }

    // Output the rearranged array
    for (int i = 0; i < n; i++) {
        cout << rearranged[i];
    }

    // Free dynamically allocated memory
    delete[] array;

    return 0;
}

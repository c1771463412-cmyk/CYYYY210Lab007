// COMSC-210-5293 | Lab 7 | Yuyi Chen

#include <iostream>
#include <string>

using namespace std;

// Size of the array
const int SIZE = 5;

// Prototypes
void displayArray(string *);
string* reverseArray(string *);

int main() {
    // Dynamically allocate an array of strings
    string *names = nullptr;
    names = new string[SIZE];

    // Initialize the array with some names
    *(names + 0) = "Alice";
    *(names + 1) = "Bob";
    *(names + 2) = "Charlie";
    *(names + 3) = "David";
    *(names + 4) = "Eve";
 
    // Display the original array
    cout << "Original array: ";
    displayArray(names);
    cout << endl;

    // Reverse and display the reversed array
    names = reverseArray(names);
    cout << "Reversed array: ";
    displayArray(names);
    cout << endl;

    // Deallocate the memory
    delete [] names;

    return 0;
}

// Function to display the contents of the array
void displayArray(string *arr) {
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr + i) << " ";
    }
}

// Function to reverse the contents of the array
string* reverseArray(string *arr) {
    string temp;

    for (int i = 0; i < SIZE / 2; i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + SIZE - 1 - i);
        *(arr + SIZE - 1 - i) = temp;
    }

    return arr;
}
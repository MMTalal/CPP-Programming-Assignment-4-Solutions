#include <iostream>  // Include I/O stream library for input/output operations
using namespace std; // Use standard namespace to simplify access to std members

// Function to print an integer
void PrintNum(int x) {
    // Print the integer passed as an argument
    cout << x;
    // Explanation: This function takes an integer `x` and prints it to the console.
    // It is a void function, meaning it does not return any value.
}

int main() {  
    // Display program header and instructions to the user
    cout << "This is Assignment No. 5;" << endl << endl;
    // Explanation: This provides context to the user about what the program does.
    cout << "Create a void function that takes an integer and prints it." << endl;
    // Prompt the user for input
    int num;
    cin >> num;
    // Call the PrintNum function 
    PrintNum(num);
    // Explanation: This demonstrates how the `PrintNum` function works by passing the integer 10.
    // The function will print `10` to the console.

    return 0;  // Indicate successful program termination
    // Explanation: Returning 0 from `main()` signifies that the program executed successfully.
}
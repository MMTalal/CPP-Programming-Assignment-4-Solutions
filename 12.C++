// Include the input-output stream library to enable console input/output operations.
// <iostream> is necessary for using 'cout', 'cin', and other I/O functionalities.
#include <iostream>

// Use the standard namespace to avoid repeatedly typing 'std::' before standard library functions.
// This simplifies code like 'std::cout' to just 'cout'. 
// (Note: In larger projects, "using namespace std" is discouraged to avoid naming conflicts.)
using namespace std;

// Function: divisor
// Purpose: Print all divisors of a given number 'x'.
// Parameters:
//   - x (int): The number whose divisors need to be determined.
// Return Type: 'void' (no return value) because it prints the results directly.
void divisor(int x) {
    // Loop from 1 to x to check for divisibility.
    for (int i = 1; i <= x; i++) 
    {
        // If 'x' is divisible by 'i', then 'i' is a divisor of 'x'.
        if (x % i == 0) 
        {
            // Print the divisor.
            cout << i << " ";
        }
    }
    // A newline for better output formatting.
    cout << endl;
}

// Main function: Entry point of the program.
int main() {
    // Print program header and description.
    cout << "This is Assignment No. 12;" << endl << endl;
    cout << "Create a void function to print all divisors of a number." << endl;
    // Declare a variable to store the user input (integer number).
    int num; 
    cin >> num; 
    // Call the 'divisor' function to compute and print the divisors of 'num'.
    divisor(num); 
    // Return 0 to indicate successful program termination.
    // In C++, returning 0 from main() is conventional for indicating no errors.
    return 0; 
}

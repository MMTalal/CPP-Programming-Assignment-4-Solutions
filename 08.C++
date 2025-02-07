#include <iostream>  // Include the input-output stream library for handling console input and output
using namespace std; // Use the standard namespace to avoid prefixing std:: before standard functions

// Function to check whether a given number is even and return a boolean result
bool isEven(int x) { 
    // Return true if the number is divisible by 2, else return false
    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {  
    // Display program header to inform the user about the program's purpose
    cout << "This is Assignment No. 8;" << endl << endl;
    cout << "Return true if a number is even, else false: ";
    
    // Prompt the user to enter a number
    int num; // Declare an integer variable to store the user's input
    cin >> num; // Read the number from user input

    // Call the isEven function with the user-provided number
    // The function returns a boolean, which we print as "true" or "false"
    cout << (isEven(num) ? "True" : "False") << endl;

    return 0;  // Indicate successful program termination (standard practice in C++)
}

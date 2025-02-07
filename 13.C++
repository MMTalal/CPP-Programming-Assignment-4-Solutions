#include <iostream>  // Include the input-output stream library
using namespace std; // Use the standard namespace to simplify code

// Function: divisible
// Purpose: Check if a number is divisible by both 3 AND 4
bool divisible(int x) {
    // A number is divisible by both 3 and 4 if it gives a remainder of 0 when divided by both
    // Logical AND (&&) ensures that both conditions must be met
    if (x % 3 == 0 && x % 4 == 0) 
    {
        return true; // Return true if the number is divisible by both 3 and 4
    } 
    else 
    {
        return false; // Return false otherwise
    }
}

int main() {
    // Display assignment information
    cout << "This is Assignment No. 13" << endl << endl;
    
    // Prompt the user to enter a number for divisibility check
    cout << "Check if a number is divisible by both 3 and 4: ";
    
    int num; // Variable to store user input
    cin >> num; // Take input from the user
    
    // Print "True" if the number is divisible by both 3 and 4, otherwise print "False"
    // Uses a ternary operator for concise conditional output
    cout << (divisible(num) ? "True" : "False");
    
    return 0; // Indicate successful program termination
}

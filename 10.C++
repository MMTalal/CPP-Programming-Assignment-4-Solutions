#include <iostream>  // Include the input-output stream library for handling console input and output
using namespace std; // Use the standard namespace to avoid prefixing std:: before standard functions

// Function to calculate the cube of a number
// This function takes an integer 'n' as input and returns its cube (n^3)
int cube(int n) {  
    int multi = 1;  // Initialize the variable to store the multiplication result, starting from 1

    // Loop 3 times to multiply the number by itself three times (n * n * n)
    for (int i = 0; i < 3; i++)  // The loop runs exactly 3 times, ensuring correct cube calculation
    {
        multi = multi * n;  // Multiply the result by 'n' in each iteration
    }

    return multi;  // Return the final computed cube value to the calling function
}

int main() { 
    // Display program header to inform the user about the program's purpose
    cout << "This is Assignment No. 10;" << endl << endl;
    cout << "Return the cube of a given number." << endl;
    
    // Prompt user for input
    int num;  // Declare an integer variable to store user input
    cin >> num;  // Read the user input and store it in 'num'

    // Call the cube function and display the result
    // The function returns the cube value, which is then printed using cout
    cout << cube(num) << endl;

    return 0;  // Indicate successful program termination (0 means no errors)
}

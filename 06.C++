#include <iostream>  // Include I/O stream library for input/output operations
using namespace std; // Use standard namespace to simplify access to std members

// Function to calculate and return the average of three integers
float PrintNum(int x, int y, int z) 
{
    // Calculate the average of the three integers
    // Explanation: The sum of x, y, and z is divided by 3.0 to ensure floating-point division.
    // This ensures the result is a float, even though the return type is `int`.
    return ((x + y + z) / 3.0);
    // Note: The return type is `int`, so the result will be truncated to an integer.
    // This may not be the desired behavior for calculating an average.
}

int main() {  
    // Display program header and instructions to the user
    cout << "This is Assignment No. 6;" << endl << endl;
    // Explanation: This provides context to the user about what the program does.
    cout << "Create a function that returns the average of three integers as a float." << endl;
    // Prompt the user for input
    cout << "Input your numbers please: ";
    float num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    
    // Call the function and display the result
    cout << PrintNum(num1, num2, num3);
    // Explanation: This demonstrates how the `PrintNum` function works by passing the integers 5, 6, and 7.
    // However, the result is not stored or printed, so the function call has no visible effect.

    return 0;  // Indicate successful program termination
    // Explanation: Returning 0 from `main()` signifies that the program executed successfully.
}
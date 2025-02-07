#include <iostream>  // Include I/O stream library for input/output operations
using namespace std; // Use standard namespace to simplify access to std members

int main() {          // Main function - entry point of the program
    // Display program header and instructions
    cout << "This is Assignment No. 1;" << endl << endl;
    cout << "Write a program to read elements in a matrix and find the sum of main diagonal (major diagonal) elements of the matrix." << endl;

    // Get matrix size from user
    cout << "Enter the size of major you want for a square matrix: ";
    int major;  // Variable to store matrix dimension (both rows and columns)
    cin >> major;

    // Validate user input for matrix size
    if (major < 0) 
    {
        // Handle invalid input: negative size
        cout << "The major number is invalid .. please choose a positive number" << endl;
    }
    else if (major == 1) 
    {
        // Handle edge case: matrix size is 1 (not a valid matrix for diagonal calculation)
        cout << "Your major is equal to 1 .. please choose a number greater than 1" << endl;
    }
    else 
    {
        // Declare 2D array with fixed size (assuming maximum 100x100 matrix)
        int arr[100][100];  // Using fixed size array for simplicity

        // Input matrix elements section
        cout << "Input your 2D array elements please:" << endl;
        // Outer loop for row iteration
        for (int i = 0; i < major; i++) 
        {
            // Inner loop for column iteration
            for (int j = 0; j < major; j++) 
            {
                cin >> arr[i][j];  // Read element at current position
            }
        }

        // Calculate diagonal sum section
        int sum = 0;  // Initialize sum accumulator

        // Loop through all elements in matrix
        for (int i = 0; i < major; i++) 
        {
            for (int j = 0; j < major; j++) 
            {
                // Check if current position is on main diagonal
                if (i == j) 
                {  // Main diagonal condition: row == column
                    sum += arr[i][j];  // Add diagonal element to sum
                }
            }
        }

        // Alternative more efficient approach:
        /*
        for (int i = 0; i < major; i++) 
        {
            sum += arr[i][i];  // Directly access diagonal elements without inner loop
                               // Example: arr[0][0], arr[1][1], arr[2][2], etc.
        }
        */

        // Display final result
        cout << "Sum of main diagonal elements = " << sum << endl;
    }

    return 0;  // Indicate successful program termination
}
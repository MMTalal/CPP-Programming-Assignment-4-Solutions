#include <iostream>  // Include I/O stream library for input/output operations
using namespace std; // Use standard namespace to simplify access to std members

int main() {  // Main function - entry point of the program

    // Display program header and instructions
    cout << "This is Assignment No. 3;" << endl << endl;
    cout << "Find the sum of elements in each row of a matrix." << endl;

    // Get matrix size from user
    cout << "Enter the size of major you want for row matrix: ";
    int row;  // Variable to store matrix dimension rows
    cin >> row;  // Read user input for matrix size

    cout << "Enter the size of major you want for column matrix: ";
    int column;  // Variable to store matrix dimension columns
    cin >> column;  // Read user input for matrix size
    
    // Validate user input for matrix size
    if (row < 0 || column < 0)  // Check if the input size is negative
    {
        // Handle invalid input: negative size
        cout << "The major number is invalid .. please choose a positive number" << endl;
    } 
    else if (row == 1 || column == 1)  // Check if the matrix size is 1 (not useful for matrix operations)
    {
        // Handle edge case: matrix size is 1
        cout << "Your major is equal to 1 .. please choose a number greater than 1" << endl;
    }
    else  // If the input is valid (greater than 1)
    {
        // Declare 2D array with a maximum fixed size of 100x100
        // This assumes the user input won't exceed this limit
        int matrix[100][100];  // Matrix to store user input values

        // Prompt user to enter elements of the matrix
        cout << "Input your 2D array elements in your matrix please:" << endl;

        // Outer loop iterates over rows
        for (int i = 0; i < row; i++) 
        {
            // Inner loop iterates over columns
            for (int j = 0; j < column; j++) 
            {
                cin >> matrix[i][j];  // Read the element at position (i, j) in the matrix
            }
        }

        // Compute and display the sum of each row in the matrix
        for (int i = 0; i < row; i++)  // Loop through each row
        {
            int sum = 0;  // Initialize sum for the current row

            for (int j = 0; j < column; j++)  // Loop through each column in the current row
            {
                sum = sum + matrix[i][j];  // Accumulate sum of elements in the row
            }

            // Display sum of the current row (adding 1 to row index for user-friendly numbering)
            cout << "Sum of row no. " << i + 1 << " is " << sum << endl;
        }
    }

    return 0;  // Indicate successful program termination
}

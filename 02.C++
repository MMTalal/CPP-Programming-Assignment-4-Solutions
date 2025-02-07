#include <iostream>  // Include I/O stream library for input/output operations
using namespace std; // Use standard namespace to simplify access to std members

int main() {          // Main function - entry point of the program
    // Display program header and instructions
    cout << "This is Assignment No. 2;" << endl << endl;
    cout << "Read elements in two matrices and compute their sum." << endl;

    // Get matrix size from user
    cout << "Enter the size of major you want for square matrices: ";
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
        // Handle edge case: matrix size is 1 (not meaningful for matrix operations)
        cout << "Your major is equal to 1 .. please choose a number greater than 1" << endl;
    }
    else 
    {
        // Declare 2D array with fixed size (assuming maximum 100x100 matrix)
        int matrix1[100][100];  // First matrix to store user input
        int matrix2[100][100];  // Second matrix to store user input
        int matrix3[100][100];  // Resultant matrix to store the sum of matrix1 and matrix2

        // Input matrix elements for matrix1
        cout << "Input your 2D array elements in matrix no. 1 please:" << endl;
        // Outer loop for row iteration
        for (int i = 0; i < major; i++) 
        {
            // Inner loop for column iteration
            for (int j = 0; j < major; j++) 
            {
                cin >> matrix1[i][j];  // Read element at current position (i, j) in matrix1
            }
        }

        // Input matrix elements for matrix2
        cout << "Input your 2D array elements in matrix no. 2 please:" << endl;
        // Outer loop for row iteration
        for (int i = 0; i < major; i++) 
        {
            // Inner loop for column iteration
            for (int j = 0; j < major; j++) 
            {
                cin >> matrix2[i][j];  // Read element at current position (i, j) in matrix2
            }
        }

        // Compute the sum of matrix1 and matrix2
        // Loop through all elements in the matrices
        for (int i = 0; i < major; i++) 
        {
            for (int j = 0; j < major; j++) 
            {
                // Add corresponding elements of matrix1 and matrix2
                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        // Display the resultant matrix (matrix3)
        cout << "The sum of the two matrices is:" << endl;
        // Outer loop for row iteration
        for (int i = 0; i < major; i++) 
        {
            // Inner loop for column iteration
            for (int j = 0; j < major; j++) 
            {
                cout << matrix3[i][j] << " ";  // Print each element of the resultant matrix
            }
            cout << endl;  // Move to the next line after printing each row
        }
    }

    return 0;  // Indicate successful program termination
}
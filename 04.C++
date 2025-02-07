#include <iostream>  // Include I/O stream library for input/output operations
using namespace std; // Use standard namespace to simplify access to std members

int main() {  
    // Display program header and instructions to the user
    cout << "This is Assignment No. 4;" << endl << endl;
    cout << "Determine if a given matrix is symmetric (equal to its transpose)." << endl;
    
    // A symmetric matrix is a square matrix (same number of rows and columns) in which the elements are mirrored across the main diagonal. This means: matrix[i][j] == matrix[j][i]

    // Prompt user for the number of rows in the matrix
    cout << "Enter the number of rows: ";
    int row;  
    cin >> row;  // Read the number of rows from user input

    // Prompt user for the number of columns in the matrix
    cout << "Enter the number of columns: ";
    int column;  
    cin >> column;  // Read the number of columns from user input
    
    // Validate the user input for matrix size
    if (row <= 0 || column <= 0)
    { 
        // Check if the input values are positive
        cout << "Invalid input! Matrix dimensions must be positive numbers." << endl;
        return 1;  // Exit the program if input is invalid
    } 
    
    if (row != column) 
    {  
        // Check if the matrix is square (rows must equal columns for symmetry)
        cout << "The matrix is not square, so it cannot be symmetric." << endl;
        return 1;  // Exit the program if the matrix is not square
    }
    else
    {
        // Declare a square matrix with a maximum size of 100x100
        int matrix[100][100];  
    
        // Prompt user to enter the elements of the matrix
        cout << "Enter the elements of the matrix:" << endl;
        for (int i = 0; i < row; i++) 
        {
            for (int j = 0; j < column; j++) 
            {
                cin >> matrix[i][j];  // Read each element into the matrix
            }
        }
    
        // Initialize a boolean variable to check symmetry
        bool isSymmetric = true;  // Assume it is symmetric initially
    
        // Loop through the matrix to check symmetry
        for (int i = 0; i < row; i++)
        {  
            for (int j = 0; j < i; j++)
            {  // Only check the lower triangle of the matrix (i > j) for efficiency
                if (matrix[i][j] != matrix[j][i]) 
                {  
                    isSymmetric = false;  // Found a mismatch, set isSymmetric to false
                    break;  // Exit the inner loop if a mismatch is found
                }
            }
            if (!isSymmetric) break;  // Exit the outer loop if symmetry is already broken
        }
    
        // Output the result to the user
        if (isSymmetric)
        {
            cout << "Symmetric" << endl;  // Matrix is symmetric
        }
        else
        {
            cout << "Not symmetric" << endl;  // Matrix is not symmetric
        }
    }
    
    return 0;  // Successful program termination
}
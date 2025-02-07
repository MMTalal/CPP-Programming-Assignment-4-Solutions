#include <iostream>  // Include the input-output stream library for handling console input and output
using namespace std; // Use the standard namespace to avoid prefixing std:: before standard functions

// Function to find and print the maximum and minimum values in an array
void findMinMax(int arr[], int n) { 
    // Initialize min and max with the first element of the array
    int max = arr[0]; // Assume the first element is the largest initially
    int min = arr[0]; // Assume the first element is the smallest initially

    // Loop through the array to find max and min values
    for (int i = 1; i < n; i++) // Start from the second element (index 1)
    {  
        if (arr[i] > max) // If the current element is greater than the max found so far
        { 
            max = arr[i];  // Update max with the new larger value
        }
        if (arr[i] < min) // If the current element is smaller than the min found so far
        {  
            min = arr[i];  // Update min with the new smaller value
        }
    }

    // Print the final results
    cout << "Maximum = " << max << endl; // Output the maximum value found
    cout << "Minimum = " << min << endl; // Output the minimum value found
}

int main() {  
    // Display program header to inform the user about the program's purpose
    cout << "This is Assignment No. 9;" << endl << endl;
    cout << "Input two or more numbers and find their maximum and minimum using functions." << endl;
    
    // Prompt the user to enter the number of elements
    cout << "Enter the number of elements: ";
    int n;  // Declare a variable to store the number of elements
    cin >> n; // Read user input for the number of elements

    // Validate the user input: Check if the number of elements is at least 2
    if (n < 2) 
    {
        cout << "Please enter at least two numbers!" << endl; // Inform the user of invalid input
        return 1; // Exit the program with an error code (1 indicates an error occurred)
    }
    else
    {
        int arr[1000];  // Declare an array with a size large enough to hold the input numbers

        // Ask the user to enter the numbers and store them in the array
        cout << "Enter " << n << " numbers: ";
        for (int i = 0; i < n; i++) // Loop through the number of elements specified by the user
        {
            cin >> arr[i];  // Read each number from user input and store it in the array
        }
    
        // Call the function to find and print the min and max values
        findMinMax(arr, n); // Pass the array and its size to the function
    }

    return 0;  // Indicate successful program termination (0 means no errors)
}

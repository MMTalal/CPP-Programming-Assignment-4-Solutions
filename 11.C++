// Include the input-output stream library to enable console input/output operations.
// <iostream> is necessary for using 'cout', 'cin', and other I/O functionalities.
#include <iostream>

// Use the standard namespace to avoid repeatedly typing 'std::' before standard library functions.
// This simplifies code like 'std::cout' to just 'cout'. 
// (Note: In larger projects, "using namespace std" is discouraged to avoid naming conflicts.)
using namespace std;

// Function: circle
// Purpose: Calculate and display diameter, circumference, and area of a circle.
// Parameters:
//   - radius (float): The radius of the circle. 
//     Using 'float' instead of 'int' allows decimal values for precision (e.g., 2.5 units).
// Return Type: 'void' (no return value) because results are printed directly, 
// avoiding the need to return a value that would go unused.
void circle(float radius) {
    // Calculate diameter: diameter = 2 * radius
    float Diameter = radius * 2; 
    // Calculate circumference: 2 * π * radius (approximating π as 3.14 for simplicity)
    float Circumference = Diameter * 3.14; 
    // Calculate area: π * radius^2 (again using π ≈ 3.14)
    float Area = (radius * radius) * 3.14; 

    // Print results directly to the console.
    // Using 'endl' to add a newline after each output for readability.
    cout << "Diameter = " << Diameter << " units" << endl;
    cout << "Circumference = " << Circumference << " units" << endl;
    cout << "Area = " << Area << " units" << endl;

    // No return statement needed because the function is 'void'.
}

// Main function: Entry point of the program.
int main() {
    // Print program header and description.
    cout << "This is Assignment No. 11;" << endl << endl;
    cout << "Compute diameter, circumference, and area of a circle using functions." << endl;
    
    // Prompt the user to input the radius.
    cout << "Input radius: ";
    float num; // Declare a float variable to store the radius (supports decimal input).
    cin >> num; // Read the user's input and store it in 'num'.

    // Call the 'circle' function with the user-provided radius.
    // The function handles all calculations and printing internally.
    circle(num); 

    // Return 0 to indicate successful program termination.
    // In C++, returning 0 from main() is conventional for indicating no errors.
    return 0; 
}
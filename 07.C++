#include <iostream>  // Include the standard input-output stream library
using namespace std; // Use the standard namespace to avoid using std:: prefix for standard functions

// Function to check if a number is prime and print the result directly
bool isPrime(int x) {
    // Step 1: Check for numbers less than 2
    // Explanation: A prime number is a natural number greater than 1 that has only two factors: 1 and itself.
    if (x < 2) 
    {  
        // Numbers false are not prime
        return false; // Exit the function early, no need for further checks
    }
    else
    {
        // Step 2: Iterate through potential divisors from 2 up to sqrt(x)
        // Explanation: A non-prime number must have at least one factor less than or equal to sqrt(x).
        // Checking up to sqrt(x) makes the algorithm more efficient.
        for (int i = 2; i * i <= x; i++) 
        {
            if (x % i == 0) 
            { // If x is divisible by i, it is not a prime number
                return false; // return "false" if x is not prime
            }
        }
    } 
    // Step 3: If no divisors are found, the number is prime
    return true; // return "true" if x is prime
}

int main() {  
    // Display a message to inform the user about the program
    cout << "This is Assignment No. 7;" << endl << endl;
    cout << "Return true if a number is prime, else false: "; // Prompt the user for input

    int num; // Declare a variable to store the user's input
    cin >> num; // Read the input number from the user

    // Call the isPrime function with the user-provided number
    // The function itself prints "true" or "false" based on the prime check
    cout << (isPrime(num) ? "True" : "False") << endl;

    return 0; // Indicate successful program termination
}

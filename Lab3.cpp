#include <iostream>
#include <fstream> // Include the header for file handling
using namespace std;

int main() {
    // Declare variables to store user input
    int Number1, Number2;

    // Prompt the user to enter two different numbers
    cout << "Enter the first number (Number1): ";
    cin >> Number1;
    cout << "Enter the second number (Number2): ";
    cin >> Number2;

    // Open an output file for writing
    ofstream outputFile("output.txt");

    // Check if the file was successfully opened
    if (!outputFile) {
        cerr << "Error: Unable to open the output file." << endl;
        return 1;
    }

    // Calculate and write the results to the output file
    outputFile << "Equations:\n";
    outputFile << "Number1 + Number2 = " << Number1 + Number2 << endl;
    outputFile << "Number1 - Number2 = " << Number1 - Number2 << endl;
    outputFile << "Number1 * Number2 = " << Number1 * Number2 << endl;

    // Check if Number2 is not zero before performing division
    if (Number2 != 0) {
        outputFile << "Number1 / Number2 = " << static_cast<double>(Number1) / Number2 << endl;
        outputFile << "Number1 % Number2 = " << Number1 % Number2 << endl;
    } else {
        outputFile << "Number2 is zero. Division and modulo operations are undefined." << endl;
    }

    // Close the output file
    outputFile.close();

    cout << "Equations have been written to 'output.txt'." << endl;

    return 0;
}

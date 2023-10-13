#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string fileName;
    ifstream inputFile;
    string line;
    int wordCount = 0;

    // Prompt the user for the file name
    cout << "Enter the file name: ";
    cin >> fileName;

    // Open the file for reading
    inputFile.open(fileName.c_str());

    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open file '" << fileName << "'" <<endl;
        return 1; // Exit with an error code
    }

    // Read the file line by line and count words
    while (getline(inputFile, line)) {
    		cout<<line<<endl;
        stringstream ss(line);
        string word;
        while (ss >> word) {
            wordCount++;
        }
    }

    // Close the file
    inputFile.close();

    // Display the total word count
    cout << "Total word count in '" << fileName << "': " << wordCount <<endl;

    return 0;
}


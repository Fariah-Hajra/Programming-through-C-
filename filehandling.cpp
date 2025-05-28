#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string fileName = "data.txt";
    string newFileName = "info.txt";
    string initialMessage = "This is the initial message in the file.Handling file through coding;)";
    string appendedMessage = "\nThis is the appended message in the file.";

//Step 1: Create the file and write a message into it
     ofstream outFile(fileName);
    outFile << initialMessage;
    outFile.close();

//Step 2: Read and display the content of the file
    ifstream inFile(fileName);
    string content(( istreambuf_iterator<char>(inFile)),  istreambuf_iterator<char>());
   inFile.close();
    cout << "Content of the file after initial write:\n" << content <<  endl;

//  Step 3: Append a new message to the file
 outFile.open(fileName,  ios::app);
  outFile << appendedMessage;
    outFile.close();

 // Step 4: Read and display the content of the file again
    inFile.open(fileName);
    content.assign(( istreambuf_iterator<char>(inFile)),  istreambuf_iterator<char>());
    inFile.close();
     cout << "\nContent of the file after appending new message:\n" << content <<  endl;

 // Step 5: Count the number of words in the file
     istringstream iss(content);
     string word;
    int wordCount = 0;
    while (iss >> word) {
        wordCount++;
    }
     cout << "\nThe number of words in the file is: " << wordCount <<  endl;

    // Step 6: Rename the file to info.txt
    if ( rename(fileName.c_str(), newFileName.c_str()) == 0) {
         cout << "\nFile renamed to " << newFileName <<  endl;
    } else {
         perror("Error renaming file");
    }

   // Step 7: Delete the file
    if ( remove(newFileName.c_str()) == 0) {
         cout << "\nFile " << newFileName << " deleted." <<  endl;
    } else {
         perror("Error deleting file");
    }

    return 0;
}

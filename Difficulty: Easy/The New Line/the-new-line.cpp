// Function to print each word in new line
void printNewLine() {

    // Your code here
    string input = "Geeks for Geeks";
    stringstream IN(input);
    string word;
    while (IN >> word) {
        cout << word << endl;
    }
    
}
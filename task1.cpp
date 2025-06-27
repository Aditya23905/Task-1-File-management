#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename = "data.txt";
    int choice;
    string content;

    cout << "File Management Tool\n";
    cout << "1. Write\n2. Read\n3. Append\nEnter your choice: ";
    cin >> choice;
    cin.ignore(); // clear newline from buffer

    if (choice == 1) {
        ofstream file(filename);
        cout << "Enter content to write: ";
        getline(cin, content);
        file << content << endl;
        file.close();
        cout << "Data written.\n";
    } else if (choice == 2) {
        ifstream file(filename);
        string line;
        cout << "Reading from file:\n";
        while (getline(file, line))
            cout << line << endl;
        file.close();
    } else if (choice == 3) {
        ofstream file(filename, ios::app);
        cout << "Enter content to append: ";
        getline(cin, content);
        file << content << endl;
        file.close();
        cout << "Data appended.\n";
    }
    else {
        cout << "Invalid choice.\n";
    }

    return 0;
}

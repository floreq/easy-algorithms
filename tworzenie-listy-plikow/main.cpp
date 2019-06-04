#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void createFilenameList() {
    string listPath;
    cout << "Enter the path to the folder from with make a list of files (D:\\Downloads)" << endl;
    cin >> listPath;
    // assigning value to string s
    string s = "dir " + listPath + " /b > filename-list.txt";

    int n = s.length();

    // declaring character array
    char char_array[n + 1];

    // copying the contents of the
    // string to char array
    strcpy(char_array, s.c_str());

    system(char_array);
}
void createArrayFromWords() {
    // filestream variable file
    fstream file, fileAsArray;
    string word, t, q, filenameList, fileToWrite;

    // filename of the file
    filenameList = "filename-list.txt";
    fileToWrite = "photos-data.js";

    // opening file
    file.open(filenameList.c_str());
    fileAsArray.open(fileToWrite.c_str());

    fileAsArray << "const photosList = [" << endl;

    // extracting words from the file
    while (file >> word)
    {
        // displaying content
        string wordAsArrayElement = "\"" + word +"\",";
        fileAsArray << wordAsArrayElement << endl;
    }

    fileAsArray << "];" << endl;
}

int main () {
    cout << "IMPORTANT! Make sure that files: filename-list.txt and photos-data.js exist." << endl << endl;
    createFilenameList();
    createArrayFromWords();
    return 0;
}


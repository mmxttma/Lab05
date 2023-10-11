// Lab05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<char> cypher({'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E'});
string text;

void printStart() {
    cout << "Input text to cypher: ";
}
void translateCharacter() {
    getline(cin, text);
    int t;
    cout << "Encoded Message: ";
    for (int j = 0; j < text.length(); j++) {
        if ((text[j] >= 65) && (text[j] <= 90)) {
            t = text[j] - 65;
            cout << cypher[t];
        }
        else if ((text[j] >= 97) && (text[j] <= 122)) {
            char upperCaseLetter = text[j] - 32;
            char upperCaseCode = cypher[upperCaseLetter - 65] + 32;
            cout<< upperCaseCode;
        }
        else {
            cout<< text[j];
        }
    }
    
}

int main() {
    printStart();
    translateCharacter();
    
}

/*
string text;

char translateCharacter(char x) {
    if ((x >= 65) && (x <= 90)) {
        return intVector[x - 65];
    }
    else if ((x >= 97) && (x <= 122)) {
        char upperCaseLetter = x - 32;
        char upperCaseCode = intVector[upperCaseLetter - 65];
        return upperCaseCode + 32;
    }
    else {
        return x;
    }
}

int main() {
    string NewTranslation;
    cout << "Enter a string: ";
    cin >> text;
    //getline(cin, text);
    for (int i = 0; i< text.length(); i++) {
       NewTranslation = translateCharacter(i);
    }
    cout << NewTranslation;
}
*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/**
        Author:  Brandon Perry
   Last Update:  November 8, 2020
         Class:  CSI-230
      Filename:  main.cpp
   Description:
            This is a C++ program written on my linux VM that carries out different tasks
 **/

#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "Util.h"
#include <time.h>

using namespace std;

int main() {

    // This is code I wrote while watching Devon's video. Please disreguard it.
    /*
    int i{0};
    int k = 0;
    int j;

    cout << "Values of i,j, and k" << endl;
    cout << i << ", " << j << ", " << k << endl;

    cout << "Adresses of i,j, and k" << endl;
    cout << &i << ", " << &j << ", " << &k << endl;
    cout << (long)&i << ", " << (long)&j << ", " << (long)&k << endl;

    cout << "Size of various variables" << endl;
    unsigned short int usi{};
    string str{"hello"};
    char c{'A'};
    double d = 3.14159;
    float f = 3.14159;
    bool myBool{true};

    cout << "Unsigned short: " << sizeof(usi) << endl;
    cout << "String: " << sizeof(str) << endl;
    cout << "Char: " << sizeof(c) << endl;
    cout << "Double: " << sizeof(d) << endl;
    cout << "Float: " << sizeof(f) << endl;
    cout << "bool: " << sizeof(myBool) << endl;

    int convertedD = d;
    cout << "d converted to int: " << convertedD << endl;
    i = 8;
    k = 3;
    cout << "Integer Division: " << i / k << endl;
    cout << "Casting: " << static_cast<double>(i) / k << endl;

    bool a{false};
    bool b{true};
    cout << boolalpha << a << " " << b << endl;

    cout << boolalpha << (6 == 7) << endl;
    if (i > k) {
        cout << "i is greater than k" << endl;
    } else {
        cout << "i is not greater than k, k is greater than i" << endl;
    }

    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    int m{};
    do {
        cout << m << " ";
        m++
    }
    while (m < 10);
    cout << endl;

    int n = 0;
    while (n < 10) {
        cout << n << " ";
        n++
    }
    cout << endl;

    string myString{"This is a string"};
    cout << myString << "is: " << myString.size() << "bytes long" << endl;

    const unsigned short EXAMPLE_CONST = 25;
    char cString{EXAMPLE_CONST} = "This is a cString";

    for (int i = 0; i < EXAMPLE_CONST; i++) {
        cout << cString[i];
    }
    cout << endl;

    cout << "Last value in a cString" << endl;
    cout << cString[EXAMPLE_CONST - 2] << endl;

    cout << "range based loop" << endl;
    for (char c: cString) {
        cout << c;
    }
    cout << endl;

    cout << "iterating through a string using an index" << endl;
    for (int i = 0; i < myString.size(); i++) {
        cout << myString[i];
    }
    cout << endl;

    cout << "string range based loop" << endl;
    for (char letter : myString) {
        cout << letter;
    }
    cout << endl;

    vector <string> strVec;
    strVec.push_back("Bilbo");
    strVec.push_back("Gandalf");
    strVec.push_back("Pippin");
    strVec.push_back("Sam");

    for (string s: strVec) {
        cout << s << endl;
    }
    cout << "strVec size: " << strVec.size() << endl;

    strVec.pop_back();
    cout << "size after a pop_back" << strVec.size() << endl;
    cout << "the last value is: " << strVec.back() << endl;
    strVec.push_back("Sauron");
    cout << "the last value is: " << strVec.back() << endl;

    */




    vector<string> stringVec = { "Bilbo", "Gandalf", "Pippin", "Sam", "Ring Wraith", "Balrog" };
    cout << "dumping vector of " << stringVec.size() << " Elements: ";
    vectorToConsole(stringVec);

    cout << "clue: setting srand in main\n";
    srand(time(NULL));
    cout << "calling randomElement\n" << randomElement(stringVec) << endl;

    vector<double> dVec = {3.14, 5.56, 7.72, 9, -4, 99.99, 22, 30};
    cout << "dumping vector of doubles ";
    vectorToConsole(dVec);

    cout << "sum: " << sum(dVec) << endl;
    cout << "avg: " << avg(dVec) << endl;
    cout << "lowest: " << lowest(dVec) << endl;

    string sentenceStr = "A little bird with a yellow bill";
    cout << "Calling camelCase with: " << sentenceStr << endl;
    camelCase(sentenceStr);
    cout << "multiWordString after camelCase: " << sentenceStr << "\n";
}

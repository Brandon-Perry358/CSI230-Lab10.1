/**
        Author:  Brandon Perry
   Last Update:  November 8, 2020
         Class:  CSI-230
      Filename:  Util.cpp
   Description:
            This is a C++ program written on my linux VM that carries out different tasks
 **/
#include "Util.h"

//adds the elements in the array of doubles
double sum(vector<double>& arr) {
    double sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum;
}

//finds the average of the array of doubles
double avg(vector<double>& arr) {
    double sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum / arr.size();
}

//finds the lowest element in the array of doubles
double lowest(vector<double>& arr) {
    double low = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < low) {
            low = arr[i];
        }
    }
    return low;
}

//generates a random element from an array
string& randomElement(vector<string>& arr) {
    return arr[rand() % arr.size()];
}

//converts the given string into camel case
void camelCase(string& str) {
    for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] == 32) {
            str.erase(i, 1);
            if (str[i] >= 97 && str[i] <= 122) {
                str[i] = str[i] - 32;
            }
        }
        else if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
    }
}

//prints the vector to the console if the vector contains strings
void vectorToConsole(vector<string>& arr) {
    cout << "[" << arr[0];
    for (int i = 1; i < arr.size(); i++) {
        cout << ", " << arr[i];
    }

    cout << "]" << endl;
}

//prints the vector to the console if the vector contains doubles
void vectorToConsole(vector<double>& arr)
{
    cout << "[" << arr[0];
    for (int i = 1; i < arr.size(); i++) {
        cout << ", " << arr[i];
    }

    cout << "]" << endl;
}
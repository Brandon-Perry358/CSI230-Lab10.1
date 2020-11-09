#pragma once
/**
        Author:  Brandon Perry
   Last Update:  November 8, 2020
         Class:  CSI-230
      Filename:  Util.h
   Description:
            This is a C++ program written on my linux VM that carries out different tasks
 **/

#include <vector>
#include <iostream>

using namespace std;

//adds the elements in the array of doubles
double sum(vector<double>& arr);

//finds the average of the array of doubles
double avg(vector<double>& arr);

//finds the lowest element in the array of doubles
double lowest(vector<double>& arr);

//converts the given string into camel case
string& randomElement(vector<string>& arr);

//generates a random element from an array
void camelCase(string& str);

//prints the vector to the console if the vector contains strings
void vectorToConsole(vector<string>& arr);

//prints the vector to the console if the vector contains doubles
void vectorToConsole(vector<double>& arr);
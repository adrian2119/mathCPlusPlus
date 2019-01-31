//
//  main.cpp
//  mathSolver
//
//  Created by Adrian Smith on 31/01/2019.
//  Copyright © 2019 Adrian Smith. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

void printNumbers(vector<int>);
void addNumbers(vector<int>);
void fibonacci(long);
void bigNumber(string, string);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    vector<int> startNumbers {};
    int x = 0;
    vector<string> stringNumbers{};
    string str1 = "";
    string str2 = "";
    
    cout << "Please enter your first number: ";
    cin >> str1;
    cin >> str2;
//    stringNumbers.push_back(str1);
    string another = "";
//    get extra numbers to add to the vector
    while (another != "Y" || another != "y") {
        cout << "Do you want to add another number: ";
        cin >> another;
        
        if (another == "Y" || another == "y") {
            x = 0;
            cout << "Please enter your next number: ";
            cin >> x;
            startNumbers.push_back(x);
            another = "N";
        }
        else if (another == "N" || another == "n") {
            break;
        }
        else {
            cout << "Please enter Y, y, N or n: ";
        }
    }
    
//    for (int counter = 0; counter < startNumbers.size(); counter++) {
//        cout << startNumbers[counter];
//    }
//    printNumbers(startNumbers);
//    addNumbers(startNumbers);
//    long fib = startNumbers[0];
//    fibonacci(fib);
    
    bigNumber(str1, str2);
    cout << endl;
    return 0;
}

void printNumbers(vector<int> startNumbers) {
    for (size_t i = 0; i < startNumbers.size(); i++) {
        cout << startNumbers[i];
    }
    cout << endl;
}
void addNumbers(vector<int> startNumbers) {
    int total = 0;
    for (size_t i = 0; i < startNumbers.size(); i++) {
        total += startNumbers[i];
    }
    cout << total << endl;
}
void fibonacci(long fib) {
    long numCount = fib;
    long num1 = 1;
    long num2 = 1;
    long next = 0;
    for (size_t i = 0; i <= numCount; i++) {
        next = num1 + num2;
        num1 = num2;
        num2 = next;
        cout << "num1: " << num1 << " num2: " << num2 << " next: " << next << endl;
    }
}


void bigNumber(string str1, string str2) {
    string total = "0";
    int totalFirst = 0;
    while (str1.size() > 0 && str2.size() > 0) {
        string currTotal = "0";
        int num1 = stoi(str1.substr(str1.size() - 1));
        str1.pop_back();
        int num2 = stoi(str2.substr(str2.size() - 1));
        str2.pop_back();
        totalFirst = stoi(total.substr(0,1));
        stringstream curr1;
        curr1 << num1 + num2;
        curr1 >> currTotal;
        total = currTotal + total;
    }
    total.pop_back();
    
    
    cout << total << endl;
}

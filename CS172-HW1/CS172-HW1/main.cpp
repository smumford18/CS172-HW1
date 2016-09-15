//
//  main.cpp
//  Homework 1
//
//  Created by Steven Mumford on 9/8/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;

void ex02();

int main() {
    
    ex02();
    
}

void ex02(){
    bool hasPassedTest = true;
    srand((unsigned int)time(NULL));
    int x = rand();
    int y = rand();
    if(x > y)
        cout << "x is greater than y" << endl;
    else
        cout<< "y is greater than x" << endl;
    int numberofShares;
    cout << "Enter a value: ";
    cin >> numberofShares;
    if ( numberofShares < 100)
        cout << numberofShares << " is less than 100" << endl;
    else
        cout << numberofShares << " is greater than 100" << endl;
    int boxWidth;
    int bookWidth;
    cout << "Enter a box width: ";
    cin >> boxWidth;
    cout << "Enter a book width: ";
    cin >> bookWidth;
    if (boxWidth % bookWidth == 0)
        cout << "Box width is evenly divisible by book width." << endl;
    else
        cout << "Box width is not evenly divisilbe by book width." << endl;
    
    int shelfLife;
    int outsideTemp;
    cout << "Enter the shelf life of chocolate: ";
    cin >> shelfLife;
    cout << "Enter the outside temperature: ";
    cin >> outsideTemp;
    if(outsideTemp > 90)
        shelfLife -= 4;
    cout << "Adjust shelf life to " << shelfLife << "." << endl;
    
}
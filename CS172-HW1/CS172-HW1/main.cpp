//
//  main.cpp
//  Homework 1
//
//  Created by Steven Mumford on 9/8/16.
//  Copyright © 2016 Steven Mumford. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cmath>
#include <string>

using namespace std;

void ex02();
void ex03();
void ex04();

int main() {
    
    //ex02();
    //ex03();
    ex04();
    
}

void ex02(){
    
    // Initial variable hasPassedTest to true
    bool hasPassedTest = true;
    
    // Assign random number to x and y; Compares the numbers and outputs the greater one
    srand((unsigned int)time(NULL));
    int x = rand();
    int y = rand();
    if(x > y)
        cout << "x is greater than y" << endl;
    else
        cout<< "y is greater than x" << endl;
    
    // Takes a user input value and compares it to 100
    int numberofShares;
    cout << "Enter a value: ";
    cin >> numberofShares;
    if ( numberofShares < 100)
        cout << numberofShares << " is less than 100" << endl;
    else
        cout << numberofShares << " is greater than 100" << endl;
   
    // Takes values for box width and book width and tests to see if the box width is evenly divisible by the book width
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
    
    // Asks for a shelf life and temperature and reduces the shelf life by four if the temperature is greater than ninety.
    int shelfLife;
    int outsideTemp;
    cout << "Enter the shelf life of chocolate: ";
    cin >> shelfLife;
    cout << "Enter the outside temperature: ";
    cin >> outsideTemp;
    if(outsideTemp > 90)
        shelfLife -= 4;
        cout << "The shelf life is " << shelfLife << "." << endl;
    
}

void ex03() {
    
    // Takes the area of the square returns the length of the diagonal
    double squareArea;
    cout << "Enter area of a square: ";
    cin >> squareArea;
    double length = sqrt(squareArea);
    double diagonalLength = sqrt(2) * length;
    cout << "The diagonal length is " << diagonalLength << endl;
    
    // Takes in a "y" or "n" response and returns the "Yes" for y and "No" for n
    char response;
    cout << "Enter yes or no (y or n): ";
    cin >> response;
    if(response == 'y')
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    // Initializes a char variable to tab
	char tab = '\t';
    
    // Asks for a mailing address takes in the full line
	string mailingAddress;
    cin.ignore();
	cout << "Enter your mailing address: " << endl;
	getline(cin, mailingAddress);
	
	string empty = "";

}

void ex04() {
    
    // Prompts the user for a number and keeps asking until it gets a number between 1 and 10
    int number;
    cout << "Enter a value between one and ten: ";
    while(number > 10 || number < 1)
                cin >> number;
    
    // Sums the cubes from 1 to the number entered above
    int sum;
    for(int i = 1; i <= number; i++) {
        int temp01 = pow( i , 3 );
        sum += temp01;
    }
    cout << sum << endl;
    
}

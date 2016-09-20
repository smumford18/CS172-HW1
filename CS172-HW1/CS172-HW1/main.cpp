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
int doubleValue(int);
int add(int, int);
int addOne(int&);
void ex05();
void arrayOut(int[], int);
void arraySearch(int[], int);


int main() {
    
    ex02();
    ex03();
    ex04();
    ex05();
    
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
        cout << "The shelf life is " << shelfLife << ".\n\n";
    
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
	
    // Initializes an empty string variable
	string empty = "";
    
    cout << "\n";
    
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
    
    // Outputs the number of asterisks equal to the value entered
    int j=1;
    do{
        cout << "*";
        j++;
    } while (j <= number);
    cout << "\n";
    
    // Outputs the even integers from 2 to 40.
    int temp02;
    for(int k = 0; k <= 20; k++) {
        temp02 = 2 * k;
        cout << temp02 << " ";
    }
    cout << "\n";
    
    // Uses a function to double the number that was input
    int doubled = doubleValue(number);
    cout << "Value doubled is " << doubled << "\n";
    
    // Addes two random numbers with a seperate function
    srand((unsigned int)time(NULL));
    int m = rand() % (100 - 0);
    int n = rand() % (100 - 0);
    int u = add(m, n);
    cout << u << "\n";
    
    // Addes one a referenced variable
    int& g = number;
    int y = addOne(g);
    cout << "Value plus one is " << y << "\n\n";

}

// Function that doubles the passed in value
int doubleValue(int l) {
    
    int z;
    z= 2 * l;
    return z;
    
}

// Function that sums the two passed in values
int add(int m, int n) {
    
    int o;
    o = m + n;
    return o;
    
}

// Function that adds one to a passed in value
int addOne(int& g) {
    
    int temp03;
    temp03 = g + 1;
    return temp03;
    
}

void ex05() {
    
    // Uses a loop to read in 5 integers and puts them in an array
    int arraySize=5;
    int stevens[arraySize];
    cout << "Enter five integers: ";
    for(int v=1; v < 6; v++) {
        //int temp04;
        cin >> stevens[v];
    }
    
    // Finds the sum of the values in the array
    int sum=0;
    for(int p=1; p < 6; p++) {
        int temp05 = stevens[p];
        sum += temp05;
    }
    cout << "Sum: " << sum << "\n";
    
    // Finds the product of the values in the array
    int product=1;
    for(int q=1; q < 6; q++) {
        int temp06 = stevens[q];
        product *= temp06;
    }
    cout << "Product: " << product << "\n";
    
    // Calls a function that outputs the values in the array
    arrayOut(stevens, arraySize);
    
    // Calls a function that allows the user to enter a value and tests to see if it's in the array
    arraySearch(stevens, arraySize);
    
}

//Function that outputs the values in an array
void arrayOut(int array1[], int r) {
    
    cout << "Array values: ";
    for( int e=1; e < r+1; e++) {
        cout << array1[e] << " ";
    }
    cout << "\n";
    
}

// Allows the user to enter a value and checks to see if that value is in the array
void arraySearch(int array3[], int t) {
    
    int test;
    bool tester = false;
    cout << "Enter a value: ";
    cin >> test;
    for(int h=1; h <= t; h++) {
        if(test == array3[h]) {
            tester = true;
        }
    }
    if(tester == false)
        cout << test << " is not in the array.\n\n";
    else
        cout << test << " is in the array.\n\n";
    
}

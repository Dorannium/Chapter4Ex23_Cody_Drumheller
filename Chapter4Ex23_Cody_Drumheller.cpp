/*
Title: Chapter 4 Exercise 23 - Geometry Calculator
File Name: Chapter4Ex23_Cody_Drumheller.cpp
Programmer: Cody Drumheller
Date:20241025
Requirements:
Write a program that displays the following menu:
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
Enter your choice (1–4):
*/

#include <iostream>
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;
    double radius, length, width, base, height, area;

    do {
       
        cout << "Geometry Calculator\n";
        cout << "1. Calculate the Area of a Circle\n";
        cout << "2. Calculate the Area of a Rectangle\n";
        cout << "3. Calculate the Area of a Triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1–4): ";
        cin >> choice;

       
        if (choice < 1 || choice > 4) {
            cout << "Error: Please enter a valid choice (1-4).\n";
            continue;
        }

        switch (choice) {
        case 1:
            
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            if (radius < 0) {
                cout << "Error: Radius cannot be negative.\n";
            }
            else {
                area = PI * radius * radius;
                cout << "The area of the circle is " << area << endl;
            }
            break;

        case 2:
          
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            if (length < 0 || width < 0) {
                cout << "Error: Length and width cannot be negative.\n";
            }
            else {
                area = length * width;
                cout << "The area of the rectangle is " << area << endl;
            }
            break;

        case 3:
           
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            if (base < 0 || height < 0) {
                cout << "Error: Base and height cannot be negative.\n";
            }
            else {
                area = base * height * 0.5;
                cout << "The area of the triangle is " << area << endl;
            }
            break;

        case 4:
            cout << "Exiting the program.\n";
            break;
        }
    } while (choice != 4);

    return 0;
}


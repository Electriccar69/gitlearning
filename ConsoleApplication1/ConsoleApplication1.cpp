// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cmath>

void addition();
void Subtraction();
void Multiplacation();
void Division();

int num1{ 10 };
int num2{ 30 };


int main() {
    addition();
    Subtraction();
    Multiplacation();
    Division();
}

void addition() {
    int result;
    result = num1 + num2;
    std::cout << "The addition of the two numbers is: " << result;
}
void Subtraction() {
    int result;
    result = num1 - num2;
    std::cout << "\nThe Subtraction of the two numbers is: " << result;
}
void Multiplacation() {
    int result;
    result = num1 * num2;
    std::cout << "\nThe Multiplacation of the two numbers is: " << result;
}
void Division() {
    int result;
    result = num2 / num1;
    std::cout << "\nThe Division of the two numbers is: " << result;

}
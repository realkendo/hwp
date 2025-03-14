/*
 * Copyright (c) 2025 Fatima 
 * Federal University Dutse
 * All rights reserved.
 
 * Circle Circumference Calculator
 * Created on: March 14, 2025
 */

#include <iostream>
using namespace std;

//function for calculating circumference of a circle
double calculateCircumferenceOfCircle(){
	const double PI = 3.142;
	double r = 4.5;
	double C = 2 * PI * r;
	cout << "The circumference of a circle with radius of " << r << " is = " << C <<endl;	
	return 0;
}

int main(){
	calculateCircumferenceOfCircle();
	return 0;
}
/*
 * Copyright (c) 2025 Fatima 
 * Federal University Dutse
 * All rights reserved.
 
 * Temperature Converter
 * Created on: March 14, 2025
 */

#include <iostream>
using namespace std;

//function for coverting Fahrenheit temperature to Celcius
double temperatureConverter(double F){
	double C = (F - 32) * 0.56;
	cout << F <<" Fahrenheit " << " = " << C << " Celcius"<<endl;	
	return 0;
}

int main(){
	//function call inside main
	temperatureConverter(85);
	return 0;
}
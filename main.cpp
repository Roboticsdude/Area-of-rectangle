//
//  main.cpp
//  Area - This code will find the area of a rectangle
//
//  Created by Claudio Caldarescu on 3/25/17.
//  Copyright © 2017 Claudio Caldarescu. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // create variables
    int length, width, area;
    
    // request user input
    cout << "Enter the length and width (in feet) separated by a space: \n";
    cin >> length >> width; // the two values are stored
    
    // logic - calculate the area of a rectangle
    area = length * width;
    
    //Output
    cout << "The area of a rectangle with length " << length << " and width " << width << " is " << area << " ft^2 \n";
    
    return 0;
}

//
//  main.cpp
//  SumSquaredDifference
//
//  Created by Michael Wienands on 9/22/17.
//  Copyright © 2017 Michael Wienands. All rights reserved.
//  https://github.com/mwienands/SumSquaredDifference.git
//
//The sum of the squares of the first ten natural numbers is,
//
//12 + 22 + ... + 102 = 385
//The square of the sum of the first ten natural numbers is,
//
//(1 + 2 + ... + 10)2 = 552 = 3025
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
//
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    int SqOfSum = 0;
    int sumOfSquares = 0;
    for(int i =1; i <101; i++){
        SqOfSum += pow(i,2);
    }
    for(int i = 1; i< 101; i++){
        sumOfSquares += i;
    }
    sumOfSquares = pow(sumOfSquares, 2);
    
    int difference = sumOfSquares - SqOfSum;
    std::cout << difference;
    return 0;
} 

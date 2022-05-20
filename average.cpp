// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in May 2022
// This is a math program, calculating the average of 10 random numbers

#include <iostream>
#include <random>

int main() {
    // This function calculates the average
    int singleNumber;
    int randomNumber[10];
    int listSize = sizeof(randomNumber)/sizeof(randomNumber[0]);
    float average;
    float averageSum = 0.0;

    // input
    for (int loopCounter = 0; loopCounter < 11; loopCounter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        singleNumber = idist(rgen);
        randomNumber[loopCounter] = singleNumber;
    }

    // process & output
    for (int loopCounter = 0; loopCounter < listSize; loopCounter++) {
        std::cout << "The random number is: "
        << randomNumber[loopCounter] << std::endl;
        averageSum = averageSum + randomNumber[loopCounter];
    }
    average = averageSum / listSize;
    std::cout << "\nThe average is " << average << "." << std::endl;
    std::cout << "\nDone.";
}

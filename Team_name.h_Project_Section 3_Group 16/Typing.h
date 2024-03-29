// CSCN71030 - Team Based Project Development 
// Group Project Group 16 - Section 3
// Typing Module: Brodin Collins-Robb
// March 17th, 2022
// 
// This is the header file for the typing module
// 
// Revision History 
// 1.0       March 17th      2022

#pragma once

//This function will get the input from the user (this input should match the sentence from the disaply sentence function 
char* GetInput(double *storeSpeed);

//This function takes in the sentence that the user had to type, and it takes in the sentence that the user did type,
//and it takes in the speed in which the user typed the sentence to find generated damage amount.
double CheckSentence(char* sentenceToType, int sentenceLength, char* sentenceTyped, double typingSpeed);

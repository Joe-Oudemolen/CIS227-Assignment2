/*
	Name - Joe Barron
	Class - CIS227 Winter 2021
	Assignment 2
	Date - 1/27/2021

	Define class and functions for use in Assignment 2 source code
*/

#pragma once
#include <string>

#ifndef ASSIGNMENT2_H_
#define	ASSIGNMENT2_H_

class Show {
private:

public:
	// The array of values for the user to select
	std::string sWords[12] = {"Cat", "Fireplace", "Baseball", "Cube", "Fork", "Book", "Computer", "Game", "Paper", "Number", "Phone", "Movie"};
	// Function definitions
	std::string getWord(int);
};
#endif
/*
	Name - Joe Barron
	Class - CIS227 Winter 2021
	Assignment 2
	Date - 1/27/2021

	Functions for the Display class
*/
#include <iostream>
#include <string>
#include "Assignment2.h"

std::string Show::getWord(int iUserInput) {
	return Show::sWords[iUserInput -1];
}

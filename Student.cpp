///////////////////////////////////////////////////////////////////////
// File Name:      Student.cpp
//
// Author:         Ben Klonowski
// CS email:       klonowski@cs.wisc.edu
// 
// Course:         CS 368 (C++)
// Section:        2
// Instructor:     Kuemmel       
//
// Description:   
//
// Sources:       
//
// URL(s) of sources:           
///////////////////////////////////////////////////////////////////////
#include "Student.hpp" 
int Student::getNumStudents () 
{
	return -1;
}
int Student::getId() 
{
	return -1;
}
std::string Student::getName() 
{
	return "Student name";
}
int Student::getYearOfBirth() 
{
	return -1;
}
int Student::getAge() 
{
	return -1;
}
const std::vector<double> &getAssignmentsScore()
{
	std::vector<double> scores;
}
double Student::getProjectScore()
{
	return -1;
}
void Student::printDetails() {
}

/**
* @brief Get the total score of a student.
*
* @return The total score of the student.
*/
double Student::getTotal() {
	return -1.0;
}

/**
* @brief Get the letter grade obtained by a student.
*
* @return The letter grade of the student. The possible letter grades are "CR" and "N".
*/
std::string Student::getGrade() {
	return "Student grade";
}


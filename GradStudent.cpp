///////////////////////////////////////////////////////////////////////
// File Name:      GradStudent.cpp
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
#include "GradStudent.hpp"
std::string GradStudent::getResearchArea() {
	return "GradStudent research area";
}
/**
* @brief Getter for the student's advisor.
*
* @return The advisor of the student.
*/
std::string GradStudent::getAdvisor() {
	return "GradStudent advisor name";
}

/**
* @brief Get the total number of graduate students.
*
* @return The number of undergraduate students.
*/
int GradStudent::getNumStudents(){
	return -1;
}

void GradStudent::printDetails() {
}
double GradStudent::getTotal() {
	return -1.0;	
}
std::string GradStudent::getGrade() {
	return "GradStudent grade";
}

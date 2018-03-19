///////////////////////////////////////////////////////////////////////
// File Name:      UndergradStudent.cpp
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
#include "UndergradStudent.hpp"
#include <iostream>
UndergradStudent::UndergradStudent(std::string name,
                     int yearOfBirth,
                     const std::vector<double>& assignmentsScore,
                     double projectScore,
                     std::string residenceHall,
                     std::string yearInCollege): Student (name, yearOfBirth, assignmentsScore, projectScore)
{	
	this->residenceHall = residenceHall;
	this->yearInCollege = yearInCollege;
}

/**
* @brief Getter for a student's residence hall.
*
* @return The residence hall in which the student resides.
*/
std::string UndergradStudent::getResidenceHall() {
	return residenceHall;
}

/**
* @brief Getter for a student's year in college.
*
* @return The year in college of the student.
*/
std::string UndergradStudent::getYearInCollege() {
	return yearInCollege;
}
/**
* @brief Get the total number of undergraduate students.
*
* @return The number of undergraduate students.
*/
int UndergradStudent::getNumStudents() {
	return Student::getNumStudents();
}
void UndergradStudent::printDetails() {
	Student::printDetails();
	std::cout<< "Residence Hall = " + getResidenceHall() << std::endl;
	std::cout << "Year in College = " +  getYearInCollege()<< std::endl;
}

double UndergradStudent::getTotal() {
	return -1.0;
}

std::string UndergradStudent::getGrade() {
	return "UndergradStudent grade";
}

#include "StudentType.h"
#include <string>
#include <iostream>
using namespace std; 
//Your class implementation functions go below

	StudentType::StudentType(string first, string last, int score, char gr)
	{
		setFirstName(first);
		setLastName(last);
		setTestScore(score);
		setGrade(gr);
	}
	StudentType::StudentType() //constructor
	{
		testScore = 0;
	}
	StudentType::~StudentType() {} //destructor
	//setter
	void StudentType::setFirstName(string first)
	{
		firstName = first;
	}
	void StudentType::setLastName(string last)
	{
		lastName = last;
	}
	void StudentType::setTestScore(int score)
	{
		testScore = score;
	}
	void StudentType::setGrade(char gr)
	{
		Grade = gr;
	}
	//getters
	string StudentType::getfirstName() const
	{
		return firstName;
	}
	string StudentType::getlastName() const
	{
		return lastName;
	}
	int StudentType::gettestScore() const
	{
		return testScore;
	}
	char StudentType::getgrade() const
	{
		return Grade;
	}

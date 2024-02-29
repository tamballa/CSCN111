#pragma once

#include <string>
#include <iostream>

class StudentType
{
private:
	std::string firstName;
	std::string lastName;
	int testScore;
	char Grade;

public:
	StudentType(std::string first, std::string last, int score, char gr);
	StudentType(); //constructor
	~StudentType(); //destructor
	//setter
	void setFirstName(std::string first);
	void setLastName(std::string last);
	void setTestScore(int score);
	void setGrade(char gr);
	//getters
	std::string getfirstName() const;
	std::string getlastName() const;
	int gettestScore() const;
	char getgrade() const;
};


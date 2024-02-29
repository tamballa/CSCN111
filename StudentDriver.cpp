#include <iostream>
#include "Student.h"
#include <string>
using namespace std;

int main()
{
	Student s;
	s.setStudentName("Tanya");
	s.setStudentID("L1234567");
	s.setStudentGPA(4.0);

	//cannot use these as these r private...need to make public safely ______ use setters
	/*s.StudentName = "Tanya";
	s.StudentID = "L1234567";
	s.StudentGPA = 4.0; */

	cout << s.getStudentName() << endl;
	cout << s.getStudentID() << endl; 
	cout << s.getStudentGPA() << endl; 

	Student s2("John", "L98765", 3.0); 
	cout << s2.getStudentName() << endl;
	cout << s2.getStudentID() << endl;
	cout << s2.getStudentGPA() << endl;

	return 0; 
}
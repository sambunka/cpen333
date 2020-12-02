#pragma once
#include <string>

class system
{
private:
	int displayCourses();
	int anotherStudent();
	int anotherCourse();
public:
	bool login(string username, string password);
	int selectStudent(string studentNumber);
	int editAcceptGrade(float grade);
	int editAcceptGrade();
	int startAdvanceStudents();
	string checkStanding(student);

};
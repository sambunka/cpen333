#pragma once
#include <io.h>
#include <string>

using namespace std;

struct courseInfoStruct
{
	string courseName;
	string studentList[100];
	float studentGradeList[100];
};

class system
{
private:
	courseInfoStruct currentCourse;

	typedef struct statement_struct{
		string statement;
		int score;
	};
	
	typedef struct program_capacity{
		string eng_prog;
		int capacity;
	};
	
	program_capacity program_capacities[13];
	
public:
	int anotherStudent()
	{
		cout << "Would you like to process another student? (y/n): ";
		char response;
		do
		{
			cin >> response;
			if (response == 'y' || response == 'Y')
				return 1;
			else if (response = 'N' || response == 'n')
				return 0;
			else
				cout << "Try again" << endl;
		} while (true);
	}
	int anotherCourse()
	{
		cout << "Would you like to process another course? (y/n): ";
		char response;
		do
		{
			cin >> response;
			if (response == 'y' || response == 'Y')
				return 1;
			else if (response = 'N' || response == 'n')
				return 0;
			else
				cout << "Try again" << endl;
		} while (true);
	}
	int selectCourse(int course)
	{
		class course mycourse;

		currentCourse = mycourse.courseInfo("");

	}
	int displayCourses(int currentUser)
	{
		cout << "Here are your courses: " << endl;
		cout << "1: CPEN 333" << endl;
		cout << "2: CPEN 331" << endl;

	}
	bool login(string username, string password);
	int selectStudent(string studentNumber);
	int editAcceptGrade(float grade);
	int editAcceptGrade();
	int startAdvanceStudents();
	string checkStanding(student);
	
	void display_student_menu();
	void input_ranking(); // displays program names sequentially and requests student ranking 
	void input_statement();
	int update_unscored_statements(); // returns number of unscored statements
	int score_statements(); // uses update_unscored_statements() and returns number of unscored statements 

	bool verify_placement_reqs();
	void display_admin_menu();
	int compute_placement_score(); 
	string place_student(); // uses compute_placement_score() and verify_placement_reqs()
	
};

class student
{
private: 
	int ranking[13];
	string statement;
	int statement score;
	
	typedef struct grade_data{
		string course;
		int grade;
		string standing;
	};
	
	string login[2]; // login[0] = username, login[1] = password
	
public:
	void setStanding(string course, string standing)
	void notifyStudent(string message);
	
	void update_ranking(int &ranking[13]);
	void update_statement(string statement);
	void update_statement_score();
	
};

class course
{
private:

public:
	struct courseInfoStruct courseInfo;
	courseInfoStruct getCourseInfo(string course);
};

// System functions

void display_student_menu(){
	
	cout << "Welcome Student!\n";
	cout << "Please select from the following options:\n";
	cout << "Press 1 to enter program rankings\n";
	cout << "Press 2 to enter personal statement\n";
}

void display_admin_menu(){
	
	cout << "Welcome Administrator!\n";
	cout << "Please select from the following options:\n";
	cout << "Press 1 to score personal statements\n";
	cout << "Press ~ to log out any time\n";
	
	int select_menu_option;
	int unscored_statements;
	cin >> select_menu_option:
	
		if(select_menu_option == 1){
			score_statements(); // score_statements is a loop
			
		} else if (select_menu_option = ~) {
			display << "You are being logged out...\n";
			return;
		} else {}

		"You are being logged out...\n";
		
}

int score_statements(){
	
}
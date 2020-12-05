#pragma once

#include <string>
#include <vector>
#include <Windows.h>
#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct statement_struct {
	string statement;
	int score;
};

typedef struct program_capacity {
	string eng_prog;
	int capacity;
};

typedef struct grade_data {
	string course;
	int grade;
	int credits;
	string standing;
};

// SYSTEM CLASS

class sys
{
public:
	/*
	int displayCourses();
	int anotherStudent();
	int anotherCourse(); */
	
	program_capacity program_capacities[13];
	
	vector<statement_struct> unscored_statements;

	sys() {

		program_capacities[0].eng_prog == "Biomedical";
		program_capacities[0].capacity = 2; 

		program_capacities[1].eng_prog == "Chemical and Biological";
		program_capacities[1].capacity = 2;

		program_capacities[2].eng_prog == "Civil";
		program_capacities[2].capacity = 2;

		program_capacities[3].eng_prog == "Computer";
		program_capacities[3].capacity = 2;

		program_capacities[4].eng_prog == "Electrical";
		program_capacities[4].capacity = 2;

		program_capacities[5].eng_prog == "Engineering Physics";
		program_capacities[5].capacity = 2;

		program_capacities[6].eng_prog == "Environmental";
		program_capacities[6].capacity = 2;

		program_capacities[7].eng_prog == "Geological";
		program_capacities[7].capacity = 2;

		program_capacities[8].eng_prog == "Integrated";
		program_capacities[8].capacity = 2;

		program_capacities[9].eng_prog == "Manufacturing";
		program_capacities[9].capacity = 2;

		program_capacities[10].eng_prog == "Materials";
		program_capacities[10].capacity = 2;

		program_capacities[11].eng_prog == "Mechanical";
		program_capacities[11].capacity = 2;

		program_capacities[12].eng_prog == "Mining";
		program_capacities[12].capacity = 2;

		program_capacities[13].eng_prog == "Chemical";
		program_capacities[13].capacity = 2;
		
	}

	/*
	bool login(string username, string password);
	int selectStudent(string studentNumber);
	int editAcceptGrade(float grade);
	int editAcceptGrade();
	int startAdvanceStudents();
	string checkStanding(student);*/

	void display_admin_menu() {

		cout << "Welcome Administrator!\n";
		cout << "Please select from the following options:\n";
		cout << "Press 1 to score personal statements\n";
		cout << "Press 9 to log out\n";

		int select_menu_option;
		int unscored_statements;
		cin >> select_menu_option;

		if (select_menu_option == 1) {
			score_statements(); // score_statements is a loop
		}
		else if (select_menu_option = 9) {
			cout << "You are being logged out...\n";
			return;
		}
		else {}

		"You are being logged out...\n";

	}

	void update_unscored_statements(string new_statement) {
		statement_struct add_statement;
		add_statement.statement = new_statement;
		add_statement.score = 0;
		unscored_statements.push_back(add_statement);
	}

	void score_statements() {
		int i = 0;

		cout << "Please score the following statements out of 100";

		while (i < sizeof(unscored_statements)) {
			cout << unscored_statements[i].statement << "\n";
			cin >> unscored_statements[i].score;
			cout << "\n\n";
			i++;
		}

	}

	float compute_score(float GPA, int statement_score) { // in main()
		return ((GPA * 0.5) + (statement_score * 0.5));
	}

};

// STUDENT CLASS

class student
{
public:
	int i;
	int ranking[13];
	string statement;
	int statement_score;

	grade_data transcript[100];

	string login[2]; // login[0] = username, login[1] = password
	int place; // stores where the student was placed from 1 to 13

	/*
	void setStanding(string course, string standing);
	void notifyStudent(string message);*/

	// CONSTRUCTOR 

	student(grade_data course_1, grade_data course_2) {
		for (i = 0; i < 12; i++) {
			ranking[i] = 0;
		}

		statement = "Unchanged";
		statement_score = 0;
		
	}

	float compute_GPA() {
		int i = 0;
		int sum = 0;

		while (transcript[i] != '\0') {
			sum += transcript[i].grade;
		}

		return sum / i;

	}

	int compute_credits() {
		int i = 0;
		int sum = 0;

		while (transcript[i] != '\0') {
			sum += transcript[i].credits;
		}

		return sum;

	}

	boolean verify_placement_reqs(float GPA, int total_credits) { // student function now
		if ((GPA > 55.0) && (total_credits > 27)) {
			return true;
		}

		return false;

	}

	string display_student_menu() {

		cout << "Welcome Student!\n";
		cout << "Please select from the following options:\n";
		cout << "Press 1 to update your program rankings\n";
		cout << "Press 2 to update your personal statement\n";
		cout << "Press 9 to log out\n";

		int select_menu_option;
		cin >> select_menu_option;

		while (1) {
			if (select_menu_option == 1) {
				cout << "Please enter a value between 1 and 13 indicating your preference for the selected program:\n\n";
				cout << "Civil Engineering: ";
				cin >> ranking[0];
				cout << "\nBiomedical Engineering: ";
				cin >> ranking[1];
				cout << "\nElectrical Engineering: ";
				cin >> ranking[2];
				cout << "\nEngineering Physics: ";
				cin >> ranking[3];
				// ... and other programs
			}
			else if (select_menu_option == 2) {
				cout << "Please enter your personal statement:\n";
				cin >> statement;
			}
			else if (select_menu_option == 9) {
				cout << "You are being logged out...\n";
				return statement;
			}
			else {}

			cout << "Press 0 to view menu options again or press 9 to log out.\n";
			cin >> select_menu_option;

			if (select_menu_option == 0) {
				cout << "Press 1 to update your program rankings\n";
				cout << "Press 2 to update your personal statement\n";
				cout << "Press 9 to log out\n";
				cin >> select_menu_option;
			}
			else if (select_menu_option == 9) {
				cout << "You are being logged out...\n";
				return statement;
			}
			else {

			}
		}

		"You are being logged out...\n";

	}

};

/* Algo:

1. Store all student scores in an array
2. Place student with highest score in top choice prog
- find student with highest score 
- find their top choice prog (look at ranking array)
- place in top choice prog and subtract 1 from capacity

same with second highest

if top choice is full:
	look for second choice and place

3. 

*/
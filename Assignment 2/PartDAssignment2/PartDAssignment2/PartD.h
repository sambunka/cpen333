#pragma once
#include <string>

class system
{
private:
	int displayCourses();
	int anotherStudent();
	int anotherCourse();
	
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
	void setStanding(string course, string standing);
	void notifyStudent(string message);
	
	void update_ranking(int &ranking[13]);
	void update_statement(string statement);
	void update_statement_score();
	
};

// System functions

void display_student_menu(){
	
	cout << "Welcome Student!\n";
	cout << "Please select from the following options:\n";
	cout << "Press 1 to enter your program rankings\n";
	cout << "Press 2 to enter your personal statement\n";
	cout << "Press ~ to log out any time\n";
	
	int select_menu_option;
	
	if(select_menu_option == 1){
		input_rankings();
	} else if (select_menu_option == 2){
		input_statement();
	} else if (select_menu_option == '~'){
		cout << "You are being logged out...\n";
		return;
	} else {}
	
	"You are being logged out...\n";
	
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
			
		} else if (select_menu_option = '~') {
			cout << "You are being logged out...\n";
			return;
		} else {}

		"You are being logged out...\n";
		
}

int score_statements(){
	
}
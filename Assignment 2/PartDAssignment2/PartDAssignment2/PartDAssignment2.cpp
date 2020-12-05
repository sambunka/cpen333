#include <iostream>
#include <stdio.h>
#include "PartD.h"

int main(void) {

	int i; 
	float max;
	sys system;

	float GPA; int credits;
	bool place;
	float weighted_score;
	float weighted_scores[4];

	/*
	typedef struct grade_data {
	string course;
	int grade;
	int credits;
	string standing;
};*/

	grade_data stu_1_1;
	stu_1_1.course = "CPEN 333";
	stu_1_1.grade = 100;
	stu_1_1.credits = 15;
	stu_1_1.standing = "Cr";

	grade_data stu_1_2;
	stu_1_2.course = "APSC 160";
	stu_1_2.grade = 100;
	stu_1_2.credits = 15;
	stu_1_2.standing = "Cr";

	grade_data stu_2_1;
	stu_2_1.course = "MATH 100";
	stu_2_1.grade = 50;
	stu_2_1.credits = 15;
	stu_2_1.standing = "Cr";

	grade_data stu_2_2;
	stu_2_2.course = "MATH 256";
	stu_2_2.course = 45;
	stu_2_2.credits = 0;
	stu_2_2.standing = "Fail";

	grade_data stu_3_1;
	stu_3_1.course = "MATH 256";
	stu_3_1.course = 45;
	stu_3_1.credits = 0;
	stu_3_1.standing = "Fail";

	grade_data stu_3_2;
	stu_3_2.course = "MATH 256";
	stu_3_2.course = 45;
	stu_3_2.credits = 0;
	stu_3_2.standing = "Fail";

	grade_data stu_4_1;
	stu_4_1.course = "MATH 256";
	stu_4_1.course = 45;
	stu_4_1.credits = 0;
	stu_4_1.standing = "Fail";

	grade_data stu_4_2;
	stu_4_2.course = "MATH 256";
	stu_4_2.course = 45;
	stu_4_2.credits = 0;
	stu_4_2.standing = "Fail";

	student student_1(stu_1_1, stu_1_2);
	student student_2(stu_2_1, stu_2_2);
	student student_3(stu_3_1, stu_3_2);
	student student_4(stu_4_1, stu_4_2);

	string new_statement;
	new_statement = student_1.display_student_menu();
	system.update_unscored_statements(new_statement);

	system.score_statements(); // unscored_statements

	student_1.statement_score = system.unscored_statements[1].score;
	student_2.statement_score = system.unscored_statements[2].score; // etc.

	// statements all scored

	GPA = student_1.compute_GPA();
	credits = student_1.compute_credits();
	place = student_1.verify_placement_reqs(GPA, credits);

	if (place == true) {
		weighted_scores[0] = system.compute_score(GPA, student_1.statement_score);

	}
	else {
		weighted_scores[0] = 0;
	}

	GPA = student_2.compute_GPA();
	credits = student_2.compute_credits();
	place = student_2.verify_placement_reqs(GPA, credits);

	if (place == true) {
		weighted_scores[1] = system.compute_score(GPA, student_2.statement_score);
	}
	else {
		weighted_scores[1] = 0;
	}

	while (true) {
		for (i = 0; i < 4; i++) {
			if (weighted_scores[i] > max) {
				max = weighted_scores[i];
			}
		}

		int j;
		int max_prog;

		if (i == 1) {

			do {
				for (j = 0; j < 12; j++) {
					if (student_1.ranking[j] > max_prog) {
						max_prog = student_1.ranking[j];
					}
				}

				if (system.program_capacities[j].capacity != 0) {
					student_1.place = j;
					system.program_capacities[j].capacity--;
				}
				else {
					student_1.ranking[j] = -1;
					max_prog = -1;
				}

			} while (system.program_capacities[j].capacity == 0);

		}

		if (i == 2) {

			do {
				for (j = 0; j < 12; j++) {
					if (student_2.ranking[j] > max_prog) {
						max_prog = student_2.ranking[j];
					}
				}

				if (system.program_capacities[j].capacity != 0) {
					student_2.place = j;
					system.program_capacities[j].capacity--;
				}
				else {
					student_2.ranking[j] = -1;
					max_prog = -1;
				}

			} while (system.program_capacities[j].capacity == 0);

		}

		if (i == 3) {

			do {
				for (j = 0; j < 12; j++) {
					if (student_3.ranking[j] > max_prog) {
						max_prog = student_3.ranking[j];
					}
				}

				if (system.program_capacities[j].capacity != 0) {
					student_3.place = j;
					system.program_capacities[j].capacity--;
				}
				else {
					student_3.ranking[j] = -1;
					max_prog = -1;
				}

			} while (system.program_capacities[j].capacity == 0);

		}

		if (i == 4) {

			do {
				for (j = 0; j < 12; j++) {
					if (student_4.ranking[j] > max_prog) {
						max_prog = student_4.ranking[j];
					}
				}

				if (system.program_capacities[j].capacity != 0) {
					student_4.place = j;
					system.program_capacities[j].capacity--;
				}
				else {
					student_4.ranking[j] = -1;
					max_prog = -1;
				}

			} while (system.program_capacities[j].capacity == 0);

		}


	}

}
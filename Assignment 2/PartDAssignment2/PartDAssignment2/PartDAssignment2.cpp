#include <iostream>
#include "PartD.h"

int main()
{
    std::cout << "Hello World!\n";

    ///
    /// Use Case 5: 
    /// 
    int currentUser = 1;
    class system sys;
    class course mycourse;
    class student mystudent;
    if (!sys.login("Professor1", "myPassword"))
    {
        cout << "Failed to login" << endl;
    }
    else
    {
        do 
        {
            sys.displayCourses(1);
            int courseNumber;
            cin >> courseNumber;
            sys.selectCourse(courseNumber);
            class course mycourse;
            struct mycourse.courseInfo = {
                .courseName = "CPEN333",
                .studentList[0] = "11111111",
                .studentList[1] = "22222222",
                .studentGradeList[0] = 55.6,
                .studentGradeList[1] = 77.0};
            courseInfoStruct courseInfo = mycourse.courseInfo();

            do
            {
                sys.display_student_menu();
                cout << "Select a student from the list\n";
                int studentSelection;
                cin >> studentSelection;
                sys.selectStudent(studentSelection);
                float grade = mycourse.calculateGrade();

                cout << "The current grade for the student is " << grade << endl;
                cout << "Enter a modified grade or accept the current one (float/accept)";
                string reply;
                cin >> reply;
                if (reply == "accept")
                {
                }
                else
                {
                    grade = stof(reply);
                }
                sys.editAcceptGrade(grade);
                mycourse.setGrade(studentNumberString);
                cout << "Would you like to enter a custom standing? (y/n)";
                char c;
                string standing;
                cin >> c;
                if (c == 'y')
                {
                    cout << "Enter a custom standing for the student: ";
                    cin >> standing;
                    mycourse.customStanding(standing);
                    cout << "DEAN: do you approve the standing? (y/n)" << endl;
                    cin >> c;
                }
                if (c == 'y')
                {
                    mystudent.customStanding(standing);
                }
                else if (grade >= 50)
                {
                    mystudent.setStanding(courseAsString, "pass");
                }
                else if (grade < 50)
                {
                    mystudent.setStanding(courseAsString, "fail");
                }

                mystudent.notifyStudent("Your course standing has been updated");

            } while (sys.anotherStudent() == true)
        } while (sys.anotherCourse() == true)
        

    }

    ///
    /// End of Use Case 5
    /// 
}
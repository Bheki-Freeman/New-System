#include <iostream>

using namespace std;

int main()
{
    //variables
    int final_mark = 0;
    int lowest_mark = 100;
    int highest_mark = 0;
    char grade = 'X';
    int number_of_students = 2;

    string module_code = "AAIBP111";
    string school = "Limkokwing University of Creative Technology";    
    string faculty = "Information and Communications Technology";

    //Arrays
    string student_names[number_of_students];     
    string student_surnames[number_of_students]; 
    int student_ids[number_of_students];   
    int test_one_marks[number_of_students];
    int test_two_marks[number_of_students];
    int tutorial_marks[number_of_students];
    int project_marks[number_of_students];
    int exam_marks[number_of_students];

    //Display 
    cout << school << endl;
    cout << faculty << endl;
    cout << module_code << endl;
    cout << "--------------------------------------------" << endl;
    cout << "---------- Student Report System -----------" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Choose what to do below" << endl;
    cout << "1. Individual Student Report " << endl;
    cout << "2. Class Report " << endl;
    cout << "0. Exit" << endl;
    int response;
    cin >> response;
    switch (response)
    {
    case 1:
        cout << "Displaying Individual " << endl;
        break;
    case 2:
        cout << "Displaying Class Report" << endl;
        break;
    case 0: 
        exit(1);
        break;
    
    default:
        cout << "Wrong response" << endl;
        break;
    }

    return 0;
}
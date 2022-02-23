#include <iostream>

using namespace std;

int main()
{
    // variables
    int final_mark = 0;
    int id;
    int lowest_mark = 100;
    int highest_mark = 0;
    char grade = 'X';
    string student_class = "IT11K";
    int number_of_students = 2;

    string module_code = "AAIBP111";
    string school = "Limkokwing University of Creative Technology";
    string faculty = "Information and Communications Technology";

    // Arrays
    string student_names[number_of_students];
    string student_surnames[number_of_students];
    // int student_ids[number_of_students];
    int student_ids[] = {1112, 1113};
    int test_one_marks[number_of_students];
    int test_two_marks[number_of_students];
    int tutorial_marks[number_of_students];
    int project_marks[number_of_students];
    int exam_marks[number_of_students];

    // Display
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
        cout << "Enter student's id: ";
        cin >> id;
        for (int i = 0; i <= number_of_students; i++)
        {
            if (i == number_of_students)
            {
                cout << "Student Id not found!" << endl;                             
            }
            else if (student_ids[i] == id)
                {
                    cout << school << "\n" << faculty << "\n" << module_code << "\n" << student_class << endl;
                    cout << "Student ID: " << student_ids[i] << endl;
                    cout << "Student Name: " << student_names[i] << endl;
                    cout << "Student Surname: " << student_surnames[i] << endl;
                    cout << "Test 1 : " << test_one_marks[i] << endl;
                    cout << "Test 2 : " << test_two_marks[i] << endl;
                    cout << "Tutorial : " << tutorial_marks[i] << endl;
                    cout << "Project : " << project_marks[i] << endl;
                    cout << "Exam : " << exam_marks[i] << endl;

                    //calculate the final mark
                    final_mark = (0.1 * test_one_marks[i]) + (0.15 * test_two_marks[i]) + (0.1 * tutorial_marks[i]) + (0.2 * project_marks[i]) + (0.4 * exam_marks[i]);
                    cout << "Final Mark : " << final_mark << endl;

                    //determine grade
                    if(final_mark >= 80 && final_mark <= 100){
                        grade = 'A';
                    }
                    else if(final_mark >= 70 && final_mark <= 79){
                        grade = 'B';
                    }
                    else if(final_mark >= 60 && final_mark <= 69){
                        grade = 'C';
                    }
                    else if(final_mark >= 50 && final_mark <= 59){
                        grade = 'D';
                    }
                    else if(final_mark >= 40 && final_mark <= 49){
                        grade = 'E';
                    } 
                    else if(final_mark >= 30 && final_mark <= 39){
                        grade = 'F';
                    }
                     if(final_mark >= 20 && final_mark <= 29){
                        grade = 'G';
                    }
                    else {
                        grade = 'U';
                    }


                    cout << "Grade : " << grade << endl;

                    //We need to break to be able to validate the if
                    break;
                } 
        
        }

        break;
    case 2:
        cout << school << "\n" << faculty << "\n" << student_class << "\n" << module_code << endl;
        cout << "Displaying Class Report" << endl;
        cout << "\t **** " << endl;
        cout << "ID\tName\tSurname\tTest1\tTest2\tTutoria\tProject\tExam\tFinal\tGrade" << endl;
        for(int i= 0; i<number_of_students; i++){
        cout << student_ids[i] << "\t" << student_names[i] <<"\t" << student_surnames[i] <<"\t" <<test_one_marks[i]<<"\t" << test_two_marks[i] << "\t" << tutorial_marks[i] << "\t" << project_marks[i] << "\t"<< exam_marks[i] << "\t" << final_mark << "\t" << grade << endl;
        
        }
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
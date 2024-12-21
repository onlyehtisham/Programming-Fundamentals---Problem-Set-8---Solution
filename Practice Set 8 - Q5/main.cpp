#include <iostream>

using namespace std;

struct studentType
{
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

void inputStudent(studentType s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"\n--------------------           Student "<<i+1<<"       -------------------------\n";
        cout<<"Enter first name: ";
        cin>>s[i].studentFName;
        cout<<"Enter last name: ";
        cin>>s[i].studentLName;
        cout<<"Enter test score: ";
        cin>>s[i].testScore;
        cout<<"Enter grade: ";
        cin>>s[i].grade;
    }
}

int highestTestScore(studentType s[], int size)
{
    int max = s[0].testScore;
    for (int i = 1; i < size; i++)
    {
        if (s[i].testScore > max)
            max = s[i].testScore;
    }

    return max;
}

void highStudentName(studentType s[], int size, int maxScore)
{
    for (int i = 0; i < size; i++)
    {
        if (s[i].testScore == maxScore)
        {
            cout<<"Highest test score student: "<<s[i].studentFName<<", "<<s[i].studentLName;
        }
    }
}

int main()
{
    studentType student[5];

    inputStudent(student, 5);
    highStudentName(student, 5, highestTestScore(student, 5));

    return 0;
}

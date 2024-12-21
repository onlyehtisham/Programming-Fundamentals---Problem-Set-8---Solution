#include <iostream>

using namespace std;

struct Student
{
    int rollNo;
    string name;
    string department;
    string course;
    int year;
};

void printStudentYear(Student s[], int size, int year)
{
    for (int i = 0; i < size; i++)
    {
        if (s[i].year == year)
        {
            cout<<"Student name: "<<s[i].name<<endl;
        }
    }
}

void printStudentRollNo(Student s[], int size, int rollNo)
{
    for (int i = 0; i < size; i++)
    {
        if (s[i].rollNo == rollNo)
        {
            cout<<"Student roll #: "<<s[i].rollNo<<endl;
            cout<<"Student name: "<<s[i].name<<endl;
            cout<<"Student department: "<<s[i].department<<endl;
            cout<<"Student course: "<<s[i].course<<endl;
            cout<<"Student year: "<<s[i].year<<endl;
        }
    }
}


void inputStudent(Student s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter student roll #: ";
        cin>>s[i].rollNo;
        cout<<"Enter student name: ";
        cin>>s[i].name;
        cout<<"Enter student department: ";
        cin>>s[i].department;
        cout<<"Enter student course: ";
        cin>>s[i].course;
        cout<<"Enter student year: ";
        cin>>s[i].year;
    }
}

int main()
{
    Student s[450];
    cout<<"\n===================================================\n";
    inputStudent(s, 3);
    cout<<"\n===================================================\n";
    printStudentYear(s, 3, 2024);
    cout<<"\n===================================================\n";
    printStudentRollNo(s, 3, 2);

    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

struct Employee
{
    int code;
    string name;
    int year;
};

void showEmployee(Employee e[], int size, int year)
{
    for (int i = 0; i < size; i++)
    {
        if (year - e[i].year >= 3)
        {
            cout<<setw(10)<<e[i].code<<setw(10)<<e[i].name<<setw(10)<<e[i].year<<endl;
        }
    }
}

int main()
{
    Employee e[5] = {   {100, "Aslam", 2022},
                                       {101, "Farhan", 2020},
                                       {102, "Saim", 2019},
                                       {103, "Haris", 2021},
                                       {104, "Babar", 2023} };
    int year;
    cout<<"Enter year: ";
    cin>>year;

    showEmployee(e, 5, year);

    return 0;
}

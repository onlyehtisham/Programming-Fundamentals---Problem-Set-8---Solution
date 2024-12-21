#include <iostream>

using namespace std;

struct Customer
{
    int accNumber;
    string name;
    double balance;
};

void Below100(Customer s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (s[i].balance < 100)
        {
            cout<<"Account No: "<<s[i].accNumber<<endl;
            cout<<"Name: "<<s[i].name<<endl;
        }
    }
}

void request(Customer c[], int size, int aNo, int amount, int code)
{
    for (int i = 0; i < size; i++)
    {
        if (c[i].accNumber == aNo && code == 1)
        {
            c[i].balance += amount;
        }
        else if (c[i].accNumber == aNo && code == 0)
        {
            if (c[i].balance >= amount)
                c[i].balance -= amount;
            else
                cout<<"The balance is insufficient for the specified withdrawal";
        }
    }
}

void inputCustomer(Customer c[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter account number: ";
        cin>>c[i].accNumber;
        cout<<"Enter name: ";
        cin>>c[i].name;
        cout<<"Enter balance: ";
        cin>>c[i].balance;
    }
}

int main()
{
    Customer c[2];
    inputCustomer(c,2);
    request(c, 2, 100, 500, 0);
    return 0;
}

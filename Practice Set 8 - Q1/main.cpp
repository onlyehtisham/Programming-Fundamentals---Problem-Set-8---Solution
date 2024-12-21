#include <iostream>

using namespace std;

struct checkingAccount
{
    string accName;
    int accNumber;
    double accBalance;
    double interestRate;
};

int main()
{
    checkingAccount ca;

    ca.accName = "Jason Miller";
    ca.accNumber = 17328910;
    ca.accBalance = 24476.38;
    ca.interestRate = 2.5;

    return 0;
}

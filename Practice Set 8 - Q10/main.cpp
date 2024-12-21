#include <iostream>

using namespace std;

struct Date
{
    int dd;
    int mm;
    int yy;
};

int main()
{
    Date d1 = {2, 4, 2024};
    Date d2 = {2, 4, 2024};

    if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yy == d2.yy)
        cout<<"Equal"<<endl;
    else
        cout<<"Unequal"<<endl;
    return 0;
}

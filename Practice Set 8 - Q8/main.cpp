#include <iostream>

using namespace std;

struct Parts
{
    string serialNo;
    int year;
    string material;
    double quantity;
};

void inputParts(Parts p[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"\n======================         Part"<<i+1<<"       =========================\n";
        cout<<"Enter serial #: ";               cin>>p[i].serialNo;
        cout<<"Enter year: ";                    cin>>p[i].year;
        cout<<"Enter material: ";              cin>>p[i].material;
        cout<<"Enter quantity: ";               cin>>p[i].quantity;
    }
}

void showParts(Parts p[], int size)
{
    cout<<"**********************************************************************************************\n";
    cout<<"                                     parts between BB1 and CC6                                                                     \n";
    cout<<"**********************************************************************************************\n";
    for (int i = 0; i < size; i++)
    {
        if (p[i].serialNo >= "BB1" && p[i].serialNo <= "CC6")
        {
            cout<<"Serial #: "<<p[i].serialNo<<endl;
            cout<<"Year: "<<p[i].year<<endl;
            cout<<"Material: "<<p[i].material<<endl;
            cout<<"Quantity: "<<p[i].quantity<<endl;
        }
    }
}

int main()
{
    Parts p[3];
    inputParts(p, 3);
    showParts(p, 3);
    return 0;
}

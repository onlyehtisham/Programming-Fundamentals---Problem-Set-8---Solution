#include <iostream>

using namespace std;

struct partsType
{
    string partName;
    int partNum;
    double price;
    int quantitiesInStock;
};

void initializeParts(partsType p[], int size)
{
    for (int i = 0; i < size; i++)
    {
        p[i].partName = "";
        p[i].partNum = -1;
        p[i].price = 0.0;
        p[i].quantitiesInStock = 0;
    }
}

void showParts(partsType p[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout<<"\n------------       Part "<<i+1<<"      --------------\n";
        cout<<"Part name: "<<p[i].partName<<endl;
        cout<<"Part number: "<<p[i].partNum<<endl;
        cout<<"Part price: "<<p[i].price<<endl;
        cout<<"Quantity in Stock: "<<p[i].quantitiesInStock<<endl;
    }
}

void inputParts(partsType p[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout<<"\n------------       Part "<<i+1<<"      --------------\n";
        cout<<"Part name: ";                  cin>>p[i].partName;
        cout<<"Part number: ";              cin>>p[i].partNum;
        cout<<"Part price: ";                   cin>>p[i].price;
        cout<<"Quantity in Stock: ";       cin>>p[i].quantitiesInStock;
    }
}
int main()
{
    partsType inventory[100];

    initializeParts(inventory, 100);
    inputParts(inventory, 2);
    showParts(inventory, 2);

    return 0;
}

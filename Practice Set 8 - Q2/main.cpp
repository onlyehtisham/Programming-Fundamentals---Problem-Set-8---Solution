#include <iostream>

using namespace std;

struct movieType
{
    string movieName;
    string movieDirector;
    string producer;
    int year;
    int copies;
};

void inputMovie(movieType &m)
{
    cout<<"Enter movie name: ";
    getline(cin, m.movieName);
    cout<<"Enter director name: ";
    getline(cin, m.movieDirector);
    cout<<"Enter producer name: ";
    getline(cin, m.producer);
    cout<<"Enter year: ";
    cin>>m.year;
    cout<<"Enter movie copies: ";
    cin>>m.copies;
}

void showMovie(const movieType &m)
{
    cout<<"\n-------------------------------------------------------------------------------------\n";
    cout<<"\nMovie name: "<<m.movieName;
    cout<<"\nDirector name: "<<m.movieDirector;
    cout<<"\nProducer name: "<<m.producer;
    cout<<"\nYear: "<<m.year;
    cout<<"\nCopies: "<<m.copies;
}

int main()
{
    movieType m1 = {"Summer Vacation", "Tom Blair", "Rajiv Merchant", 2005, 34};
    movieType m2;

    inputMovie(m2);
    showMovie(m1);
    showMovie(m2);

    return 0;
}

#include <iostream>

using namespace std;

struct timeType
{
    int hr;
    double min;
    int sec;
};

struct tourType
{
    string cityName;
    int distance;
    timeType travelTime;
};

void showTour(tourType t)
{
    cout<<"City name: "<<t.cityName<<endl;
    cout<<"Distance: "<<t.distance<<endl;
    cout<<"Hours: "<<t.travelTime.hr<<endl;
    cout<<"Minutes: "<<t.travelTime.min<<endl;
}

tourType inputTour()
{
    tourType t;

    cout<<"Enter city name: ";
    cin>>t.cityName;
    cout<<"Enter distance: ";
    cin>>t.distance;
    cout<<"Enter hours: ";
    cin>>t.travelTime.hr;
    cout<<"Enter minutes: ";
    cin>>t.travelTime.min;

    return t;
}

void inputTour1(tourType &t)
{
    cout<<"Enter city name: ";
    cin>>t.cityName;
    cout<<"Enter distance: ";
    cin>>t.distance;
    cout<<"Enter hours: ";
    cin>>t.travelTime.hr;
    cout<<"Enter minutes: ";
    cin>>t.travelTime.min;
}

int main()
{
    tourType destination, d;

    destination.cityName = "Chicago";
    destination.distance = 550;
    destination.travelTime.hr = 9;
    destination.travelTime.min = 30;

    destination = inputTour();
    inputTour1(d);
    cout<<"\n------------------------------------------------------------------\n";
    showTour(destination);
    cout<<"\n------------------------------------------------------------------\n";
    showTour(d);

    return 0;
}

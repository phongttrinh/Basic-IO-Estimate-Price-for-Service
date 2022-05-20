#include <iostream>
using namespace std;

const double SmallRoomPrice = 25;
const double LargeRoomPrice = 35;
const double tax = 6;
const int dayPerMonth = 30;
int main(){
cout << "Hello, Wellcome to Toronto's Carpet Cleaning Service!"<< endl;
cout<<"This is our price: \n";
cout <<"$"<<SmallRoomPrice<<" per small room\n";
cout <<"$"<<LargeRoomPrice<<" per large room\n";
cout <<"Sales tax rate is "<<tax<<"%\n";
cout<<endl;

cout << "Please enter how many room you would like to clean!\n";
int SmallRoom {0};
cout << "Number of small rooms: ";
cin >> SmallRoom;

int LargeRoom {0};
cout << "Number of large rooms: ";
cin>> LargeRoom;

cout<<endl;
cout << "Estimate for Carpet Clearning Service:\n";
float TotalPriceBefTax{0};
TotalPriceBefTax = SmallRoomPrice*SmallRoom + LargeRoomPrice*LargeRoom;
cout << "Cost: "<<TotalPriceBefTax<<"$\n";
cout << "Tax: "<< tax*TotalPriceBefTax/100 << "$\n";

cout << "==========================================================\n";
float TotalPriceAfTax{0};
TotalPriceAfTax = TotalPriceBefTax + tax*TotalPriceBefTax/100;
cout<<"Total estimate: "<<TotalPriceAfTax << "$\n";
cout << "This estimate is valid for " << dayPerMonth << " days\n";
cout <<"Thank You for Using Our Service!!!";
} 
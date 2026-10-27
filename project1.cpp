#include<iostream>
using namespace std;
int main(){
    float numberofelectricityunitconsumed;
    int costperunits=15;
    int fixedservicecharge=200;
    float electricitycharge;
    float additionaltax=0.05;
    float finalbill,combined,tax;
    cout<<"\nEnter your number of electricity units consumed : ";
    cin>>numberofelectricityunitconsumed;
    electricitycharge=numberofelectricityunitconsumed*costperunits;
    cout<<"\nYOUR ELECTRICITY CHARGES  ARE : "<<electricitycharge;
    combined=electricitycharge+fixedservicecharge;
    tax=combined*additionaltax;
    cout<<"\nYour tax amount is : "<<tax;
    finalbill=combined+tax;
    cout<<"\nYour final bill is : "<<finalbill;
    cout<<"\nYour service charges are : "<<fixedservicecharge<<endl;
    return 0;
	
	}

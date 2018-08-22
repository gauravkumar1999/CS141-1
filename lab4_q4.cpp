//loading the lib
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//starting the main fn
int main(){
           //displaying the operation
           cout <<endl<<"Compiling the given number of days into years, weeks and remaining days. Define 'days':";
           //defining 'days' and saving it
           int days;
           cin >>days;
           cout <<"Number of days= "<<days<<endl<<endl;
           //operating on 'days'
           int year= trunc(days/365);
           // saves the no of year in the 'days'
           int week= trunc((days-(year*365))/7);
           // saves the remaining weeks after the days in year has been taken from 'days'
           int day= days-((year*365)+(week*7));
           // saves the remaining day after the days in year and week has been taken from 'days'
           
           //displaying the results
           cout <<"Number of year= "<<year<<" years."<<endl;
           cout <<"Number of remaining weeks= "<<week<<" weeks."<<endl;
           cout <<"Number of remaining days= "<<day<<" days."<<endl<<endl;
           cout <<"Formula: 'days'=year*365 + week*7 + day. (Assumption: 1 year=365 days)"<<endl<<endl;
           //terminating the program
           return 777;
}
           // This program is a bit tricky! Need to use some serious brainpower to get the results :)

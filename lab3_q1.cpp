//Initialising the library
#include<iostream>
using namespace std;
//Starting the main function
int main(){
           //Assigning the variables
           int a=5;
           //My favourite no.
           char b='G';
           // That's the first letter of my name!(Stupid computer says my full name is overflowing with too many bytes)
           float c =19.47;
           // Independence year
           double d=3.141592654;
           // Value of pi
           bool e=1;
           // Always positive!

           // Printing the details of variables into terminal
           cout <<endl;
           cout <<"Displaying the info of variables a, b, c, d & e: "<<endl;
           cout <<endl;
           cout <<"a contains the value: "<<a<<". Size of int a= "<<sizeof(a)<<" Bytes."<<endl;
           cout <<"b containg the character: "<<b<<". Size of char b= "<<sizeof(b)<<" Bytes."<<endl;
           cout <<"c contains the value: "<<c<<". Size of float c= "<<sizeof(c)<<" Bytes."<<endl;
           cout <<"d contains the value: "<<d<<". Size of double d= "<<sizeof(d)<<" Bytes."<<endl;
           cout <<"e contains the value: "<<e<<". Size of bool e= "<<sizeof(e)<<" Bytes."<<endl;
           cout <<endl;
           cout <<"Have a nice day:)"<<endl;
           cout <<endl;
           return 777;
}

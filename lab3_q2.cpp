//Loading the library
#include<iostream>
using namespace std;
//Start the main function
int main(){
           //Introducing x & y
           int x=6;
           int y=3;
           //Defining the binary operations to x & y
           int add=x+y;
           int sub=x-y;
           int mul=x*y;
           float div=(x/y);
           float mod=x%y;

           //Printing the operations in terminal
           cout <<endl;
           cout <<"Initialised values of x & y:"<<endl;
           cout <<"x= "<<x<<". y= "<<y<<"."<<endl;
           cout <<endl;
           cout <<"Sum of x & y = "<<add<<"."<<endl;
           cout <<"Difference of x & y = "<<sub<<"."<<endl;
           cout <<"Product of x & y = "<<mul<<"."<<endl;
           cout <<"Division of x & y = "<<div<<"."<<endl;
           cout <<"Modulus of x & y = "<<mod<<"."<<endl;
           cout <<endl;
           return 777;
}

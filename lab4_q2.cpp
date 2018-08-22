//load the library
#include<iostream>
using namespace std;
//start the main fn
int main(){
           //Displaying our operation
           cout <<endl<<"Converting 'a' from celsius to farenheit."<<endl;
           cout <<"Define 'a': ";
           //defining and saving 'a'
           float a;
           cin >>a;
           cout <<endl<<"a= "<<a<<" celsius."<<endl<<endl;
           //operating on a
           float b=(9*a/5)+32;
           //displaying the results
           cout <<"a= "<<b<<" farenheit."<<endl<<endl;
           //terminating the program
           return 777;
}

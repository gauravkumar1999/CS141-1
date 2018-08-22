//load the lib
#include<iostream>
using namespace std;
//start the main fn
int main(){
           //displaying the operation
           cout <<endl<<"Converting 'a' from farenheit to celsius."<<endl<<"Define 'a': ";
           //defining and saving 'a'
           float a;
           cin >>a;
           cout <<"a= "<<a<<" farenheit."<<endl<<endl;
           //operating on a
           float b=(5*(a-32))/9;
           //displaying the result
           cout <<"a= "<<b<<" celsius."<<endl<<endl;
           return 777;
}
           

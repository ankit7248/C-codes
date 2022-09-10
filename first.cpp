#include<iostream>
using namespace std; 

int main(){
    int a,b,c,e=9;
    char d ='h';
    bool var = false;
    cout <<"enter the number of a and enter the number of b\n";
    cin>> a >>b;

    c=a+b;
    cout<<"value of c is " << c<<"\n";
    cout<<"value of d is " << d<<"\n";
    cout<<"value of var is " << var<<"\n";

    int x = s(e);
    cout<<x;
    return 0;
} 

int s(int a)
{
  int x=a+10;
  return x;
} 
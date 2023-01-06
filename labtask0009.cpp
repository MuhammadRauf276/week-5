#include <iostream>
#include <cmath>
using namespace std;

main(){
int a,b,c;
cout<<"Enter the value of a  :";
cin>>a;
cout<<"Enter the value of b  :";
cin>>b;
cout<<"Enter the value of c  :";
cin>>c;

float det = sqrt(pow(b, 2)-4*a*c);
float quadratic = (-b + det)/(2*a);
float squadratic = (-b - det)/(2*a);
cout <<"Results are: " << quadratic <<endl;
cout <<"Result are :"<<squadratic<<endl;
}
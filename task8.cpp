#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
float calculateheight(float degree,float wear, float distance );

main(){
float wear;
float degree;
float distance;
cout<<"Enter your angle ";
cin>>degree;
cout<<" Enter your distance  ";
cin>>distance;
float result;
 result = calculateheight(degree,wear,distance);



} 

float calculateheight(float degree,float wear, float distance )
{
float radian=57.2958;
float result1 = (degree / radian );
float result2 =tan(result1);
float final = (distance * result2);
cout<<"Your height of the object is  "<<final;

 wear = sqrt(final);
cout<<"Your height of the object is  "<<wear;
 return wear;
}
 
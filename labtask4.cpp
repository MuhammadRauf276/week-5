#include <iostream>
using namespace std;
main() {

int n1,n2,n3,n4,n5,n6,number1,number2,number3,number4,number5=0;
cout<<"Enter your 5numbers";
cin>>n1;
 number1=n1/10000;
 n2=n1%10000;
 number2=n2/1000;
 n3=n2%1000;
 number3=n3/100;
 n4=n3%100;
 number4=n4/10;
 n6=n4%10;
 number5=n6/1;
  int sum = number1+number2+number3+number4+number5;
  int total= sum % 2;
  if(total == 0){
cout<<"your number is evenish"<<endl;
}
  if(total == 1){
cout<<"your number is evenish"<<endl;
}
 

cout <<number1<<number2<<number3<<number4<<number5;


}
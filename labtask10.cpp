#include <iostream>
#include <cmath>
using namespace std;

main(){
int volume;
cout <<"Enter volume of pool in litres (1...10000): ";
cin >> volume;
int pipe1;
cout <<"Enter flow rate of first pipe(1...5000): ";
cin >> pipe1;
int pipe2;
cout <<"Enter flow rate of second pipe(1...5000): ";
cin >> pipe2;
float hour;
cout <<"Enter hours that the worker is absent: ";
cin >> hour;
float total = ((pipe1*hour) + (pipe2*hour))*100/volume;
cout <<"The pool is " << total << "% full." << endl;
int pipe1Con = (pipe1*hour*volume)/(total*100);
cout <<"Pipe1: " << pipe1Con << "%." <<endl;
int pipe2Con = (pipe2*hour*volume)/(total*100);
cout <<"Pipe2: " << pipe2Con << "%." <<endl;

}
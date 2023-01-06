   #include <iostream>
   using namespace std;
   main()
   {
    int hours, minutes;
    cout << "Enter hours : ";
    cin >> hours;
    cout << "Enter minutes : ";
    cin >> minutes;
    minutes = minutes + 15;
    if (minutes <= 59)
    {   cout << "Your time after 15 minutes is : ";
        cout << hours << ":" << minutes;
    }
    if (minutes>60){
        cout <<"Your time after 15 minutes is: ";
        hours=hours+1;
        minutes = minutes - 60;
        cout << hours <<":" << minutes;
    }
    if (hours>=23){
    hours=0;
    cout << hours <<":" << minutes;
    }
    
}
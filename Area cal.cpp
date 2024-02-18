//Task1
#include <iostream>
using namespace std;
int main()
{
const float PI = 3.14;
string s;
cout<<"..... Area Calculator ....."<<endl;
cout<<"Please Enter The Shape "<<endl;
cin>>s;
 if (s == "square")
 {
     int Square_side;
     cout<<"Please Enter Square side"<<endl;
     cin>> Square_side;
     cout<<"The Area of Square is : "<<Square_side * Square_side;
 }
 else if(s == "rectangle")
 {
     int hight;
     int wight;
     cout<<"Please Enter  hight"<<endl;
     cin>>  hight;
     cout<<"Please Enter  wight"<<endl;
     cin>>  wight;
     cout<<"The Area of rectangle is : "<<hight * wight;
 }else if (s =="circle")
 {
     float radius;
     cout<<"Please Enter  radius "<<endl;
     cin>>  radius;
     cout<<"The Area of circle is : "<<2*PI*radius;
 }
 else
 {
     cout<<"Error ..... please try agin ";
 }

    return 0;
}

#include<iostream>
#include<fstream> //for file
using namespace std;
int main()
{
char filename[30] , ch;  //store data
int total=0;  //count char
ifstream fp;  //variable file
cout<<"Enter the name of file :"<<endl;
cin>>filename;
fp.open(filename, ifstream::in); // to open file
  if(!fp)
{
cout<<"File doesn't exist ";
return 0;
}
while (fp>>std::noskipws>>ch)   //read and count
total++;
fp.close();
cout<<"Total Characters ="<<total;
return 0;
} 
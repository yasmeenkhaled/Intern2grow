//Task2
#include<iostream>
using namespace std;
int Add(int a , int b , int c)
{
  return a+b+c;
}
int Sub(int x , int y)
{
    return x-y;
}
int Multi(int w , int z)
{
    return w*z;
}
int Divi(int e , int f)
{
    return e/f;
}

int main() {
   int result = Add(3 , 7 , 9);
   cout<<result;
    return 0;
}

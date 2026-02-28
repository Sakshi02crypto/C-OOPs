#include<iostream>
using namespcae std;
class Factorial {
public :
int num,fact;
void getdata();
void calculate():
void display(); 
} ;
void factorial::getdata() {
  cout<<"enter a number:";
cin>>num;
} 
void factorial::calculate() {
  fact=1;
for(int i=1;i<=num;i++) 
fact=fact*i;
}
void factorial::display() {
  cout<<"factorial of"<<num<<"is :"<<fact<<endl;
}
int main() {
  factorial obj;
obj.getdata();
obj.calculate();
obj.display();
return 0;
}

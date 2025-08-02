#include<iostream>
using namespace std;
int main(){
   int mark;
 cout<<"enter a mark ";
 cin>>mark;
 if(mark>=0&&mark<=100){
   if(mark>=90&&mark<=100){
      cout<<"your grade is  A";
   }
   else if(mark>=80&&mark<90){
      cout<<"your grade is  B";
   }
   else if(mark>=70&&mark<80){
      cout<<"your grade is  C";
   }
   else if(mark>=60&&mark<70){
      cout<<"your grade is  D";
   }
   else if(mark>=0&&mark<60){
       cout<<"your grade is  F";
   }
 }
 else{
   cout<<"invalid input";
 }
    return 0;
}

#include<iostream>
using namespace std;
int main(){
   int daynum;
 cout<<"enter a day number ";
 cin>>daynum;                                                     
 switch(daynum){
    case 1:cout<<"it is january";                         
    break;
    case 2:cout<<"it is February";
    break;
    case 3:cout<<"it is March";
    break;
    case 4:cout<<"it is April";
    break;
    case 5:cout<<"it is May";
    break;
    case 6:cout<<"it is June";
    break;
    case 7:cout<<"it is July";
    break;
    case 8:cout<<"it is August";
    break;
    case 9:cout<<"it is Septemper";
    break;
    case 10:cout<<"it is October";
    break;
    case 11:cout<<"it is November";
    break;
     case 12:cout<<"it is December";
     break;
     default:cout<<"invalid input";
     break;
    
 }
    return 0;
}

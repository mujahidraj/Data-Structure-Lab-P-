#include<iostream>

using namespace std ;

class student
{
    public :
    string name ;
    int id;
    double cgpa ;

     public: student (string n, int i , double c)
     {
         name=n;
         id=i;
         cgpa=c;


     };

     void showdetails(){
     cout <<"FIRST STUDET"<<endl;
     cout <<"------------"<<endl;
     cout <<"Name : "<<name<<endl;
     cout <<"ID   : "<<id<<endl;
     cout <<"CGPA : "<<cgpa<<endl;


     }
};

     int main (){

     student s1("Raj",1234,4.00);
     s1.showdetails();



     return 0;
     }







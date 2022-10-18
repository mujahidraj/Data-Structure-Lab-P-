#include <iostream>

using namespace std;

 class student {

public :

   int id;
   string name ;
    float cgpa ;
    int credit_complete;

    public : student (int i,string n,float c,int cc){

         id=i;
         name=n;
         cgpa=c;
         credit_complete=cc;


    }


    void showdetails(){
        cout<<"Enter id : ";
        cin >>id;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter CGPA : ";
        cin>>cgpa;
        cout<<"Credit Completed : ";
        cin>>credit_complete;
    cout<< "ID : "<<id<<endl;
    cout<<" NANE : "<< name<<endl;
    cout <<"CGPA : "<<cgpa<<endl;
    cout<<"Complete Credit :"<< credit_complete<<endl;



    }
 };

    int main (){



    int  Student [5]={'s1','s2','s3','s4','s5'};

    student s1(0,"",0.0,0);
    student s2(0,"",0.0,0);
    student s3(0,"",0.0,0);
    student s4(0,"",0.0,0);
    student s5(0,"",0.0,0);
    s1.showdetails();
    s2.showdetails();
    s3.showdetails();
    s4.showdetails();
    s5.showdetails();







int n=5, i , j, temp;
     float cgpa[n];
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(cgpa[j]>cgpa[j+1])
            {
                temp = cgpa[j];
                cgpa[j] = cgpa[j+1];
                cgpa[j+1] = temp;
            }
        }
    }
    cout<<"CGPA Sorted Successfully";
    cout<<"The New sorted CGPA is: ";
    for(i=0; i<n; i++)
        cout<<cgpa[i]<<" ";
    cout<<endl;






    return 0;
      }

#include <iostream>
using namespace std;


int main (){
  string student[4][4];
  string i,j;

for (string i=0; i<4; i++) {

    for (string j=0;j<4; j++){

       // cin>> student [i][j];
          getline(cin,student);
    }
}
 for (i = 0; i <4 ; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cout << student[i][j] << " ";
        }
        cout << endl;
    }




return 0;
}

#include <iostream>
using namespace std ;

int main ()
{

    int matrix[3][4] ,i ,j ;

    cout<<" Enter the value of matrix : "<<endl;

    cout<<endl;

     for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout <<"-------------------------"<<endl;
    cout <<"The Matrix are : " <<endl;

    cout<<endl;

    for (i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout <<endl;
    cout<<"---------------------------"<<endl;

    cout << "Transpose Matrix are : "<<endl;


    for (int i=0; i<4;i++)
        {

            for (int j=0; j<3;j++)
            {
                    cout << matrix[j][i] << " ";
            }
        cout <<endl;
        }




    return 0;

}

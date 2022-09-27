#include <iostream>

using namespace std;

int main() {

    int x[10];

    for (int i=0;i<10;i++) {

        cin>>x[i];
    }

    for (int i=0;i<9;i++) {

        int m=1;

        for (int j=i+1;j<10;j++) {

            if (x[i]==x[j]) m++;
        }


        cout<<"The number "<<x[i]<<" is occured "<<m<<" times"<<"\n";
    }
}

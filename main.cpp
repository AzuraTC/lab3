#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "findP.h"

using namespace std;

int main()
{
    int i,N;
    int P=0;
    cout<<"Enter length of array: "<<endl;
    cin>>N;
    cout<<"N="<<N<<endl;

    int *A = new int [N];

    srand (time(NULL));

    for(i=0;i<N;i++)
    {
        A[i]=rand() % 100000; //change 20 to 100000
    }

    cout<<"An array was generated! "<<endl;

//    cout<<"[";

//    for(i=0;i<N;i++)
//    {
//        if (i==N-1)
//        {
//            cout<<A[i];
//            break;
//        }
//        cout<<A[i]<<", ";
//    }

//    cout<<"]"<<endl;

    P=findDifferentArray(A,N);
    cout<<"answer:  P = "<<P<<endl;

    cout <<"................................."<<endl;
    cout <<"................................."<<endl;
    cout<<"Cleaning after ourselves..."<<endl;
    delete [] A;
    cout <<"Done!"<<endl;
    cout <<"................................."<<endl;
    cout <<"................................."<<endl;

    return 0;
}



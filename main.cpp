#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <bitset>

using namespace std;


int findDifferentArray(int *A, int N);
//int A - массив А
//N - число элементов в массиве А


int findDifferentArray(int *A, int N)
{
    int i,P;
    P=0;
    bitset<20> array; //chage 20 to 100 000

    for (i=0;i<N;i++)
    {
       if (array[A[i]]==0)
       {
      array.set(A[i]);
          P=i;
       }
    }
    cout<<"array: "<<array<<endl;
    P=P+1;
    return P;
}


int main()
{
    int i,N, P;
    cout<<"Enter length of array: "<<endl;
    cin>>N;
    cout<<"N="<<N<<endl;

    int *A = new int [N];

    srand (time(NULL));

    for(i=0;i<N;i++)
    {
        A[i]=rand() % 20; //change 20 to 100000
    }

    cout<<"An array was generated! "<<endl;

    cout<<"[";

    for(i=0;i<N;i++)
    {
        if (i==N-1)
        {
            cout<<A[i];
            break;
        }
        cout<<A[i]<<", ";
    }

    cout<<"]"<<endl;
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



#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
 int i,N;

 cout<<"Enter length of array: "<<endl;
 cin>>N;
 cout<<"N="<<N<<endl;

 int A[N];
 srand (time(NULL));

 for(i=0;i<N;i++)
 {
    A[i]=rand() % 200 - 100;
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

 return 0;
}

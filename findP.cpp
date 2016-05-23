#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <bitset>         // std::bitset

#include "findP.h"

using namespace std;

int findDifferentArray(int *A, int N)
{
    int i,P;
    P=0;
    bitset<100000> array; //chage 20 to 100 000

    for (i=0;i<N;i++)
    {
       if (array[A[i]]==0)
       {
           array.set(A[i]);
           P=i;
       }
    }
//    cout<<"array: "<<array<<endl;
    P=P+1;
    return P;
}


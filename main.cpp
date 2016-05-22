#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <map>

using namespace std;


int findDifferentArray(int *A, int N);
//int A - массив А
//N - число элементов в массиве А


int findDifferentArray(int *A, int N)
{
    map <int,int> unicNum;
    unicNum[1]=2;
    unicNum[3]=5;
    unicNum[6]=6;

 //массив размером N для уникальных элементов
    int i,j,R,P; //счётчик массива; кол-во уникальных элементов; индекс последнего уникального элемента
    P=0;


 cout << "unicNum has: " << endl;

 for (map<int,int>::iterator it = unicNum.begin(); it != unicNum.end(); ++it)
 {
     cout << it->first << " ... " << it->second << endl;
 }

 return P;
}




int main()
{
    int i,N;
    cout<<"Enter length of array: "<<endl;
    cin>>N;
    cout<<"N="<<N<<endl;

    int *A = new int [N];

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
    findDifferentArray(A,N);

    cout <<"cleaning after ourselves"<<endl;
    cout <<"Deleting array A"<<endl;
    delete [] A;
    cout <<"Done!"<<endl;

    return 0;
}



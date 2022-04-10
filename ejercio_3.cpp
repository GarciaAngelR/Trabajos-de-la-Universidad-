//ejercio 3
#include <iostream>
using namespace std;
int main ()
{
    int n, m = 5;
    int a[]={2,8,3,0,4}; //se declara un array de 5 elementos de tipo
                         //int con esos valores iniciales
    n = a[0];       //n = 2
    a[0]=a[1]+a[2]; //a[0]= 8 + 3 = 11
    a[1]++;         //a[1]= 9
    a[n]=m+10;      //a[2]= 15
    a[n+1]=7;       //a[3]= 7
    if(a[0]>=a[1])  //if(11 >= 9)
       a[4]=a[0];   //   a[4]= 11
    cout << a[0]<<" "<< a[1]<< " "<< a[2]<< " "<< a[3]<< " "<< a[4];
    cout << endl;
    system("pause");
}

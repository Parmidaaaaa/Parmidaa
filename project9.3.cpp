#include <iostream>
#include <conio.h>

using namespace std;


main (){

int a=1 , b=1, c,n;
n=10;
cout<<"\n\n"<<a<<' '<<b;
for (int i = 3; i <= n; i++)
{
    cout<<',';
    c=a+b;
    cout<<c;
    a=b;
    b=c;
}

}

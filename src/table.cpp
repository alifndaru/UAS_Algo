
#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
    for (int i=1 ; i<=5 ; i++)
    {
        cout<<" Multiplication table of "<<i<<":"<<endl;
        for (int j=1 ; j<=10 ; j++)
        cout<<i<<"X"<<j<<"="<<(i*j)<<endl;
    } 
    system("PAUSE");  
    return 0;
}
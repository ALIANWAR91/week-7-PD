#include<iostream>
using namespace std;
int primorial(int num);
main()
{
    int number;
    cout <<"Enter Number: ";
    cin>>number;
    cout<<primorial(number);
}
bool isPrime(int number)
{
    for(int i=2;i<number;i++)
    {
        int mod;
        mod=number%i;
        if(mod==0)
        {
            return false;
            
        }

    }
    return true;
}
int primorial(int number)
{
    int count = 0;
    int n = 2;
    int result=1;
    while(number!=count)
    {
        if((isPrime(n))==1)
        {
            count++;
            result=result*n;
        }
        n++;
    }
    return result;
}
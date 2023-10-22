#include<iostream>
using namespace std;
int triangle(int dots);
main()
{
    int dots;
    cout<<"Enter the number of triangles: ";
    cin>>dots;
    cout<<"Dots in the triangle: "<<triangle( dots);
}
int triangle(int dots)
{
    int result;
    int sum=0;
    result=dots*dots;
    for(int i=0;i<dots;i++)
    {
        sum=sum+i;
    }
    cout <<sum;
    result=result-sum;
    return result;
}
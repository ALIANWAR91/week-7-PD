#include<iostream>
using namespace std;
void printStars1(int rowSize);
void printStars2(int rowSize);
main()
{
    int rowSize;
    cout<<"Enter desired number of rows: ";
    cin>>rowSize;
    rowSize=rowSize/2;
    printStars1(rowSize);
    printStars2(rowSize);
}
void printStars1(int rowSize)
{
    for (int row=rowSize;row>=1;row--)
    {
    
        for(int space=row;space>1;space--)
        {
            cout<<" ";
            
        }
        int n=row-1;
        for(int col=rowSize;col>n;col--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
void printStars2(int rowSize)
{
    
    for (int row=1;row<=rowSize;row++)
    {
    
        for(int space=1;space<row;space++)
        {
            cout<<" ";
            
        }
        for(int col=row;col<=rowSize;col++)
        {
            cout<<"*";
            
        }
        
        cout<<endl;
    }
    
}



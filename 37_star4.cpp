#include<iostream>
using namespace std;
int main(){
    int row,col;
    for(row=1;row<=5;row=row+1)
    {
        for(col=1;col<=5-row;col=col+1)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col=col+1)
        {
            cout<<col<<" ";
        }
        for(col=row-1;col>=1;col=col-1)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

}
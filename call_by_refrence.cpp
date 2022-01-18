#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y= temp;
    cout<< x<< endl;
    cout<< y<< endl;
}

int main ()
{
    int a,b;
    cout<<"enterr the value of a and b for swaping "<< endl;
    cin>> a>> b;
    swap(a,b);
    
    return 0;
}

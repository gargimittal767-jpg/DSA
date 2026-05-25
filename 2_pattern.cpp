//pattern
#include <iostream>
using namespace std;
void print(int n)
{
  for(int i=0; i<n;i++)
    {
        for(int j=0; j<n-i;j++)
        {
            cout<<" ";
        }
        for(int s=0; s< 1+2*i; s++)
        {
            cout<<"*";
        
        }
        for(int j=0; j<n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
}

int main()
{
    int k;
    int l;
    cin>>l;
    for(int i=0; i<=l; i++)
    {cin>>k;
    print(k);
    }
}
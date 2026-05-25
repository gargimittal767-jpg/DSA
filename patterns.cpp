//pattern
#include <iostream>
using namespace std;
void print1(int n)
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

void print2 (int n)
{

    for(int i=0; i<n;i++)
    {
        for(int j=0; j<i;j++)
        {
            cout<<" ";
        }
        for(int s=0; s< 2*n-(1+2*i); s++)
        {
            cout<<"0";
        
        }
        for(int j=0; j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
}

void print3(int n)
{
for(int i=1;i<=2*n-1;i++)
{
    int st=i;
    if(i>n)
    {
    st=2*n-i;
    }
    for (int j=1;j<=st;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}

}

void print4(int n)
{
    int st;
    for(int i=1;i<=n;i++)
    {
        if(i%2 == 0)
        {
             st = 0;
        }
        else
        {
            st =1;
        }
        for(int j=1; j<=i; j++ )
        {
            cout<<st;
            st = 1-st;
        }
        cout<<endl;
    }
}

void print5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=i;j++)
        {
            cout<<j;
        }
        for(int s=0; s<2*(n-i); s++)
        {
            cout<<" ";
        }
        for(int z=0;z<i;z++)  // method 2: for(int j=i; j>= 1; j--) { cout<<j; }
        {
            
            cout<<i-z;
        }
        cout<<endl;
    }


}

void print6(int n)
{
    int z=1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            
            cout<<z<<" ";
            z++;
        }
        cout<<endl;
    }
}

void print7(int n)
{
    
    for (int i=0; i<n; i++)            //for (int i=1; i<=n; i++)
    {                                   // char c ='A';
        for(char c ='A';c<= 'A'+i; c++) //  method 2:  for(int j=1; j<=i; j++) { cout<<c; ++c;}
        {
            cout<<c;
        }
        cout<<endl;
    }
}

void print8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(char c='A'; c<='A'+(n-i-1);c++)
        {
            cout<<c;
        }
         cout<<endl;
    }
   
}

void print9(int n)
{
    for(int i=0;i<n;i++)
    {
        char j = 'A'+i;
        for(int c=0;c<=i;c++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void print10(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        char ch='A';
        int br = (2*i+1)/2;
        for(int z=1;z<=(2*i)+1;z++)
        {
            cout<<ch;
            if(z<=br)
            {
                ch++;
            }
            else 
            ch--;
        }
        
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void print11(int n)
{
    for(int i=1; i<=n; i++)
    {
        char c='A';
        c='A'+n-i;
        for(int j=0;j<i;j++)
        {
            cout<<c;
            c++;
        }
        cout<<endl;
    }

}

void print12(int n)
{
    
}

int main()
{
    int k;
    int l;
    cin>>l;
    for(int i=0; i<=l; i++)
    {cin>>k;
    print11(k);
    }
}
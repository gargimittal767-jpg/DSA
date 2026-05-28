#include <bits/stdc++.h>>
using namespace std;
int c=1;
void fun() // print name 5 times
{
    if(c==6)
    return;
    cout<<"name "<<endl;
    c++;
    fun();
    //TC: O(n), SC: O(n)
}
void fun2(int i) //print from 1 to N
{
    if(c==i+1)
    return;
    cout<<c<<endl;
    c++;
    fun2(i);
}
void fun3(int i) //print from N to 1
{
    if(i==0)
    return;
    cout<<i<<endl;
    fun3(--i);
}
int main()
{
    int n;
    cin>>n;
    fun3(n);


}
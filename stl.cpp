#include <bits/stdc++.h>
using namespace std;

void explain_queue()
{
queue<int> q;
q.push(5);
q.push(3);
q.back()=q.back()+5;
//cout<<q.back()<<endl;
}

void explain_Pqueue()
{
    priority_queue<int>pq; // max heap or default priority to max number
    pq.push(9);
    pq.push(10);
    pq.pop();
    //cout<<pq.top()<<endl;


    priority_queue<int, vector<int>, greater<int>> p;  // minimum heap (priority to smallest number)
    p.push(2);
    p.push(3);
    //cout<<p.top()<<endl;

    
}

void explain_set()
{
    
    set<int>s;
    s.emplace(3);
    s.insert(5);
    s.insert(4);
    s.emplace(9);
    auto it1 = s.find(9);
    auto it2 = s.find (10);
    s.erase(5);

    int cou = s.count (1);
    cout<<cou<<endl;
    auto it4 = s.find (3);
    s.erase(it4);
    for(int x:s)
    {
        cout<<x<<endl;
    }
}

void explain_multiset()
{
    multiset<int> ms; //sorted only no unique
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.erase(1);
}

void exp_map()
{
    map<int,int> mp;
}

int main()
{
    explain_queue();
    explain_Pqueue();
    explain_set();
    explain_multiset();
    exp_map();
}
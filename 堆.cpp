#include <bits/stdc++.h>
using namespace std;

inline int read()
{
    int x = 0;char ch = getchar();
    while(!isdigit(ch)) ch = getchar();
    while(isdigit(ch)) x = x*10+ch-'0',ch = getchar();
    return x;
}

int T;

priority_queue<int> q;

int main()
{
    T = read();
    while(T--)
    {
        int opt = read();
        if(opt == 1) q.push(-read());
        else if(opt == 2) printf("%d\n",-q.top());
        else if(!q.empty()) q.pop();
    }
    return 0;
}

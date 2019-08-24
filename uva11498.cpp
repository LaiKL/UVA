#include<cstdio>
#include<iostream>

using std::scanf;
using std::printf;
using std::cin;

int main()
{
    int q, x, y, n, m;

    while(cin>>q && q)
    {
        scanf("%d%d",&x,&y);
        while(q--)
        {
            scanf("%d%d",&n,&m);
            if(x==n || y==m) printf("divisa\n");
            else if(n>x && m>y) printf("NE\n");
            else if(n>x && m<y) printf("SE\n");
            else if(n<x && m<y) printf("SO\n");
            else printf("NO\n");
        }
    }
    return 0;
}

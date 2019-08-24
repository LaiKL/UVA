#include<cstdio>

using std::scanf;
using std::printf;

int main()
{
    int cas, n, m;

    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d%d",&m,&n);
        printf("%d\n",m/3*(n/3));
    }
    return 0;
}


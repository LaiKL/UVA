#include<cstdio>
#include<algorithm>

using std::scanf;
using std::printf;
using std::sort;

int main()
{
    int n, a[3];

    scanf("%d",&n);
    for(int cas=1;cas<=n;cas++)
    {
        for(int i=0;i<3;i++) scanf("%d",&a[i]);
        sort(a,a+3);
        printf("Case %d: %d\n",cas,a[1]);
    }
    return 0;
}

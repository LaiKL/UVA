#include<iostream>
#include<algorithm>

using std::cin;
using std::cout;
using std::swap;

int main()
{
    bool a[501][501];
    int w, h, n, x, y, x1, y1, k;

    while(cin>>w>>h>>n && (w||h||n) )
    {
        for(int i=0;i<w+1;i++)
            for(int j=0;j<h+1;j++)
                a[i][j]=1;
        while(n--)
        {
            cin>>x>>y>>x1>>y1;
            if(x>x1) swap(x, x1);
            if(y>y1) swap(y, y1);

            for(int i=x;i<x1+1;i++)
                for(int j=y;j<y1+1;j++)
                    a[i][j]=0;
        }
        k=0;
        for(int i=1;i<w+1;i++)
            for(int j=1;j<h+1;j++)
                if(a[i][j]) ++k;
        if(k)
        {
            if(k==1) cout<<"There is one empty spot.\n";
            else cout<<"There are "<< k <<" empty spots.\n";
        }
        else cout<<"There is no empty spots.\n";
    }

    return 0;
}

#include<iostream>
#include<cstdio>
#include<string>

using std::cin;
using std::printf;
using std::cout;
using std::string;

inline void p(int n) {while(n--) printf(" ");}

int main()
{
    int code[26]={0,1,2,3,0,1,2,0,0,2,2,4,5,5,0,1,2,6,2,3,0,1,0,2,0,2}, a[3]={0,0,0};
    string s;

    p(10-1), printf("NAME"), p(21), printf("SOUNDEX CODE\n");


    while(cin>>s)
    {
        p(10-1), cout<< s, p(25-s.length()), cout<< s[0];
        for(int i=1,k=0;i<s.length() && k<3;i++)
        {
            if(code[(int)(s[i]-'A')] && code[(int)(s[i]-'A')]!=code[(int)(s[i-1]-'A')])
                a[k] = code[(int)(s[i]-'A')], ++k;
        }
        cout<< a[0] << a[1] << a[2] <<"\n";
        a[0] = a[1] = a[2] = 0;
    }
    p(20-1), printf("END OF OUTPUT\n");
    //printf("OK\n");
    return 0;
}

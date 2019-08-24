#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
    int n, p, m[105], k;
    double pr[105];
    string s[105], temp;

    for(int cas=1;cin>>n && cin>>p && (n&&p);cas++)
    {
        if(cas!=1) cout<< endl;
        cin.ignore();
        for(int i=0;i<n;i++)
            getline(cin, temp); //cout<< i << temp <<endl;
        for(int i=0;i<p;i++)
        {//cout<< i << endl;
            getline(cin, s[i]);
            cin>> pr[i] >> m[i];
            cin.ignore();
            for(int j=0;j<m[i];j++)
                getline(cin, temp);
        }
        k=0;
        for(int i=1;i<p;i++)
        {
            if(m[i]>m[k]) k = i;
            else if(m[i]==m[k])
                if(pr[i]<pr[k]) k = i;
        }
        cout<< "RFP #" << cas << endl << s[k] << endl;
    }
    return 0;
}

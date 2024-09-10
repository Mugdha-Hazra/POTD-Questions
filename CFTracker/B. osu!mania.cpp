#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
        vector<int>v;
       for(int i=0;i<n;i++){
       char a,b,c,d;
      
       cin>>a>>b>>c>>d;
       if(a=='#')
       v.push_back(1);
       //cout<<"1";
       else if(b=='#')
       v.push_back(2);
       //cout<<"2";
       else if(c=='#')
       v.push_back(3);
       //cout<<"3";
       else if(d=='#')
       v.push_back(4);
       //cout<<"4";
       //cout<<" ";
       }
       reverse(v.begin(), v.end());
       for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
       cout<<"\n";
       v.clear();
   }
    return 0;
}

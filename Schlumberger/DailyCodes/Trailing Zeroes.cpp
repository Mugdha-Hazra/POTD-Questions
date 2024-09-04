//Trailing Zeroes
#include <bitset>
using namespace std;
int Solution::solve(int a)
{
    bitset<64> n(a);
    //cout<<n;
    string m=n.to_string();
    int k=0;
    for(int i=m.size()-1;i>=0;i--)
    {
        if(m[i]=='0')
        k++;
        else
        break;
    }
    return k;  
}

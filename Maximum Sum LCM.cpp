class Solution {
  public:
    long long int maxSumLCM(int n) 
    { long long int c=0;
     for(int i=1;i*i<=n;i++)
     {
         if(n%i==0)
         {c+=i;
             if(i!=n/i)
             c+=n/i;
         }
     }
     return c;
    }
};

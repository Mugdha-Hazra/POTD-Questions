int LongestBitonicSequence(vector<int>a)
	{
	    int n=a.size();
	    vector<int>dp_front(n,1);
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(a[j]<a[i]&&1+dp_front[j]>dp_front[i])
	            dp_front[i]=1+dp_front[j];
	        }
	    }
	    vector<int>dp_back(n,1);
	    for(int i=n-1;i>=0;i--)
	    {
	        for(int j=n-1;j>i;j--)
	        {
	            if(a[j]<a[i]&&1+dp_back[j]>dp_back[i])
	            dp_back[i]=1+dp_back[j];
	        }
	    }
	    int maxi=0;
	    for(int i=0;i<n;i++)
	    {
	        maxi=max(maxi,dp_back[i]+dp_front[i]-1);
	    }
	    return maxi;
	}

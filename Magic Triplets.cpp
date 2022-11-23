int countTriplets(vector<int>a){
	    int l=0,r=0,c=0;
	    for(int i=0;i<a.size();i++)
	    { l=0,r=0;
	        for(int j=i+1;j<a.size();j++)
	        {
	            if(a[j]>a[i])
	            r++;
	        }
	         for(int j=0;j<i;j++)
	        {
	            if(a[j]<a[i])
	            l++;
	        }
	        c+=l*r;
	    }
	    return c;
	    
	}

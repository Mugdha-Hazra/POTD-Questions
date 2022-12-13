 vector<int> twoRepeated (int arr[], int N) {
        vector<int> v;
        for(int i=0; i<N+2; i++){
            if(arr[abs(arr[i])] > 0)
                arr[abs(arr[i])] *= -1;
            else
                v.push_back(abs(arr[i]));
        }

        return v;
    }

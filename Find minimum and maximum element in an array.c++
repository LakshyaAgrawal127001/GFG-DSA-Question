pair<long long, long long> getMinMax(long long a[], int n) {
    long long int mini=10000000001;
    long long int maxe=0;
    
    // MIN
    for (int i = 0 ; i < n; i++){
    
        // mini = MIN < mini,arr[i];
        
        if(a[i] < mini )
        mini = a[i];
    }
    
    // MAX
    for(int i = 0; i < n; i++){
    
        // maxe =MAX < maxe,arr[i];
        
        if(a[i] > maxe )
        maxe = a[i];
    }

    pair <long long ,long long>ans;
    ans.first = mini;
    ans.second = maxe;
    
    return ans;
}

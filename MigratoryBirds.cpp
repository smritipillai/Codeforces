int migratoryBirds(vector<int> arr) {
    int max=0;
    int n=arr.size();
    // cout<<n<<"\n";
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int a[max] = {0};

    for(int i=0; i<n; i++){
        int j= arr[i]-1;
        a[j]= a[j] + 1;
    }

    // for(int i=0; i<max; i++){
    //     cout<<a[i]<<" ";
    // }
    int pos=0,maxx;
    maxx = a[0];
    for (int i = 0; i < max; i++){
        if (maxx < a[i]){
            maxx = a[i];
            pos=i;
        }
    }
    pos = pos+1;
    return pos;
}

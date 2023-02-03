for(i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
        arr[pos]=number;
        n=n+1;
    }
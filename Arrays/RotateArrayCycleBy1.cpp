 if(n==2)
    {
        swap(arr[0],arr[1]);
        return;
    }
    int d=arr[n-1];
    for(int i=n-2;i>0;i--)
    {
        arr[i+1]=arr[i];
        arr[i]=arr[i-1];
    }
    arr[0]=d;
 int maxSubarraySum(int arr[], int n){
    int sum = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
        if (s < 0)
            s = 0;
        sum = max(s, sum);
    }
    sort(arr, arr + n);
    return (arr[n - 1] < 0)?arr[n - 1]:sum;
    }
};

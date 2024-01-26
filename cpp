  {
        
        sort(arr, arr + n, [](const Item& a, const Item& b) {
            return (static_cast<double>(b.value) / b.weight) < (static_cast<double>(a.value) / a.weight);
        });
        double ans=0;
        for(int i=0;i<n && W>0;i++)
        {
            if(W>=arr[i].weight)
            {
                ans += arr[i].value;
                W -= arr[i].weight;
            }
            else
            {
            ans += ((double)arr[i].value/(double)arr[i].weight)*W;
                break;
            }
        }
        return ans;
    }
        
};

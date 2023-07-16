int findClosest(int arr[], int n, int target) 
    { 
        // Complete the function
        
        if(target==0){
            return *min_element(arr,arr+n);
        }
        int diff = INT_MAX;
        int num = INT_MAX;
        for(int i = 0; i<n; i++){
            int sub = abs(target-arr[i]);
            if(sub<diff){
                diff = sub;
                num = arr[i];
            }
            else if(sub==diff && arr[i]>target){
             return arr[i];
            }
        }
        return num;
    } 

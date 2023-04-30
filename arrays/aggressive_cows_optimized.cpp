bool is_valid(vector<int> stalls, int mid, int cow)
{
    int cow_count=1;
    int j = stalls[0];
 for(int i=0;i<stalls.size();i++)
    {
        if (stalls[i]-j >= mid)
        {
             cow_count++;
        if (cow_count==cow)
        {
            return true;
        }
            j=stalls[i];
            
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    int min=0;
    int ans=-999;
    sort(stalls.begin(), stalls.end());
    int max = stalls[stalls.size()-1]-stalls[0];
    int mid=min+(max-min)/2;
    while(min<=max){
        if(is_valid(stalls,mid,k)){
            ans=mid;
            min=mid+1;
        }
        else{
            max=mid-1;
        }
     mid= min+(max-min)/2;
    }
  return ans; 
}
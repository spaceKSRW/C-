bool is_valid(vector<int> stalls, int cows, int space)
{
    int j=stalls[0];
    cows--;
   for(int i=1;i<stalls.size();i++){
       if(stalls[i]-j>=space){
           cows--;
           if(cows==0){
               return true;
           }
           j=stalls[i];
       }
   }
    return false;
}
int maxi(int x,int y){
    if(x>y) return x;
    else return y;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    int ans=0;
    sort(stalls.begin(), stalls.end());
    int max = stalls[stalls.size()]-stalls[0];
    for (int i = 1; i < max ; i++)
    {
        if (is_valid(stalls, k, i))
        {
            ans =maxi(ans,i);
        }
    }
    return ans;
}
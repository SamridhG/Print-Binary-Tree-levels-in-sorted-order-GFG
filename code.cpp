class Solution
{
    public:
    vector <vector <int>> binTreeSortedLevels (int arr[], int n)
    {
        // Your code here
        int z=0;
        vector<vector<int>>res;
        vector<int>A;
        for(int i=0;i<n;i++)
        {
            int t=pow(2,i);
            if(z<n)
            {
                while(t)
                {
                    if(z<n){
                        A.push_back(arr[z]);
                        z++;
                        t--;
                    }else
                    {
                        break;
                    }
                }
                res.push_back(A);
                A.clear();
            }
            else
            {
                break;
            }
        }
        for(int i=0;i<res.size();i++)
        {
            sort(res[i].begin(),res[i].end());
        }
        return res;
    }
};

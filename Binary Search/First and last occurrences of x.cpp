// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{
    vector<int>v;
    for(int i=0;i<n;i++)v.push_back(arr[i]);

    int lo=lower_bound(v.begin(),v.end(),x)-v.begin();
    int up=upper_bound(v.begin(),v.end(),x)-v.begin();
    if(lo==up)return {-1,-1};
    else return {lo,up-1};
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	vector<int> v= {2,4,3,1,7,11};
    //(2,4,3,1,7,11) sum of two nos. =10 TC=O(n^2)
    //1.brute force do loops i and j
    //2.linear search and binary search-nlog(n)
    //3.two ptr approach--><--(not mandatory for sorted array)-o(N)
    //TWO POINTER APPROACH--->
    sort(v.begin(),v.end());
    int start=0,end=v.size()-1,target=10;
    while(start<end)
    {
    	int sum=v[start]+v[end];
    	if(target==sum)
    	{
    		cout<<"YES";
    		break;
    		
		}
		else if(sum>target)
		{
			end--;
			
		}
		else
		{
			start++;
		}
		
	}
	return 0;
}

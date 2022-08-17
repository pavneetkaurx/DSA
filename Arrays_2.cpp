#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;
	//vector as three values,insert the same elements in the same vector
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	int siz=v.size();
	for(int i=0;i<siz;i++)
	{
		cout<<i<<endl; //infinite loop if the variable int siz is not made
	    v.push_back(v[i]);
	}
	//cout<<v.size()<<endl;
	//cout<<v.capacity();
	return 0;
}

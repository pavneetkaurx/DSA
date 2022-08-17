#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v;
	v.push_back(1);
	//{1,2,3} pushback 4 kiya toh 
	v.push_back(2);
	v.push_back(3);
    cout<<v.size()<<endl;
	cout<<v.capacity();//dont use capacity quite often
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int first,second,last;
	long long int max;

	cin>>first >> second >> last;
	if(second - first > 1)
		max = last-first-1;
	else
		max = last-second-1;

	long long int max2;

	if(last - second > 1)
		max2 = last - first - 1;
	else
		max2 = second - first - 1;

	if(max > max2)
		cout<<max<<endl;
	else
		cout<<max2<<endl;

}
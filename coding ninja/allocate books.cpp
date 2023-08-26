//meow galat hi hai but kuch to push karna hai
#include <bits/stdc++.h> 

bool isPossible( vector<int> time, int mid, int days, int chapters)
{
	int sum=0;
	int day=1;
	for(int i=0; i< chapters; i++)
	{
		if(sum+time[i] <= mid)
		sum += time[i];

		else
		{
		    day++;
		    if(day>days || time[i]> mid)
			return false;
		}
		sum= time[i];//ab next day ke liye loop chalega

	}
	return true;
	
}


long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{
	int totalTime =0;
	for(int i=0; i<m; i++)
	totalTime += time[i];

	int s=0;
	int e=totalTime;

	int mid = s+(e-s)/2;
	long long answer = -1;

	while(s<e)
	{
		if(isPossible(time, mid,n,m))
		{
		    answer = mid;
			e = mid-1;
		}
		else 
		s = mid+1;

		mid = s+(e-s)/2;
	}
	return answer;

	
}

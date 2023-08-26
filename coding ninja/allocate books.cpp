#include <bits/stdc++.h> 

bool isPossible( vector<int> time, long long mid, int days, int chapters)
{
	long long sum=0;
	long long day=1;
	for(int i=0; i< chapters; i++)
	{
		if(sum+time[i] <= mid)
		sum += time[i];

		else
		{
		    day++;
		    sum= time[i];//ab next day ke liye loop chalega
			

		    if(day>days || time[i]> mid)
			return false;
		}

		
	}
	return true;
	
}


long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{
	long long totalTime =0;
	for(int i=0; i<m; i++)
	totalTime += time[i];

	long long s=0;
	long long e=totalTime;

	long long mid = s+(e-s)/2;
	long long answer = -1;

	while(s<=e)
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

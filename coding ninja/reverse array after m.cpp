#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	int e= arr.size()-1;
   for(int s=m+1; s<=e; s++,e--)
   swap(arr[s],arr[e]);
}

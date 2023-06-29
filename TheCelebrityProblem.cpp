
#include <bits/stdc++.h> 

/*
---------------------------------------------------------------------------
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
---------------------------------------------------------------------------
*/

int findCelebrity(int n) {

	stack<int> s;

	//step 1
	 for(int i=0;i<n;i++)
	  s.push(i);

	// step2
	while(s.size() > 1) {
		int a=s.top();
		s.pop();
		int b=s.top();
		s.pop();
		if(knows(a,b))
		 s.push(b);
		else
		 s.push(a);
	}
	int ans=s.top();

	// step 3
	int zerocount=0;
	for(int i=0; i<n; i++) {
		if(!knows(ans,i))
		zerocount++;
	}
	if(zerocount != n)
	 return -1;
	
	// step 4
	int onecount=0;
	for(int i=0; i<n; i++) {
		if(knows(i,ans))
		onecount++;
	}
	if(onecount != n-1)
	 return -1;
	return ans;

}

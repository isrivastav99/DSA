// C++ program for super ugly number 
#include<bits/stdc++.h> 
using namespace std; 
//function will return the nth super ugly number 
int ugly(int a[], int size, int n){ 
	
	//n cannot be negative hence return -1 if n is 0 or -ve 
	if(n <= 0) 
		return -1; 

	if(n == 1) 
		return 1; 
	
	// Declare a min heap priority queue 
	priority_queue<int, vector<int>, greater<int>> pq; 
	
	// Push all the array elements to priority queue 
	for(int i = 0; i < size; i++){ 
		pq.push(a[i]); 
	} 
	
	// once count = n we return no 
	int count = 1, no; 
	
	while(count < n){ 
		// Get the minimum value from priority_queue 
		no = pq.top(); 
		pq.pop(); 
		
		// If top of pq is no then don't increment count. This to avoid duplicate counting of same no. 
		if(no != pq.top()) 
		{ 
			count++; 
		
			//Push all the multiples of no. to priority_queue 
			for(int i = 0; i < size; i++){ 
				pq.push(no * a[i]); 
			// cnt+=1; 
		} 
		} 
	} 
	// Return nth super ugly number 
	return no; 
} 

/* Driver program to test above functions */
int main(){
	int a[] = {2,3,5,13,19,29,31,41,43,53,59,73,83,89,97,103,107,109,127,137,139,149,163,173,179,193,197,199,211,223,227,229,239,241,251,257,263,269,271,281,317,331,337,347,353,359,367,373,379,389,397,409,419,421,433,449,457,461,463,479,487,509,521,523,541,547,563,569,577,593,599,601,613,619,631,641,659,673,683,701,709,719,733,739,743,757,761,769,773,809,811,829,857,859,881,919,947,953,967,971}; 
	int size = sizeof(a) / sizeof(a[0]); 
	cout << ugly(a, size, 4000)<<endl; 
	return 0; 
} 

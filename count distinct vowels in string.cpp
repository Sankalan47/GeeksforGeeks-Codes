// Count Distinct Vowels in String 
//
// You are given a string s. You need to count the total distinct vowels in the string. The string s contains lowercase letters only.

// Example 1:

// Input:
// geeks

// Output: 
// 1
// Example 2:

// Input:
// world

// Output:
// 1
// Your Task:

// You only need to complete the function countVowels() that takes s as parameter and returns the count of distinct vowels in the string. 

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= |s| <= 10000

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


int countVowels(string str);


int main() {
	int t;
	cin>>t;
	while(t--)
	{

	string s;
	cin >> s;
	
	cout << countVowels(s) << endl;
	
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++


int countVowels(string str){
    
   int count = 0;
   int arr[5] = {0};
   for(auto i: str) {
       if(i == 'a' && arr[0] == 0) {
           arr[0]++;
       }
       else if(i == 'e' && arr[1] == 0) {
           arr[1]++;
       }
       else if(i == 'i' && arr[2] == 0) {
           arr[2]++;
       }
       else if(i == 'o' && arr[3] == 0) {
           arr[3]++;
       }
       else if(i == 'u' && arr[4] == 0) {
           arr[4]++;
       }
   }
   for(auto i: arr){
       if(i ==1)
            count++;    
   }
   return count;
    
}

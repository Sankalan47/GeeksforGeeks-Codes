// Vowels in String 
// Basic Accuracy: 82.28% Submissions: 840 Points: 1
// You are given a string s. You need to count the total vowels in the string. The string s contains lowercase letters only.

// Example 1:

// Input:
// s = geeks
// Output: 
// 2
// Example 2:

// Input:
// s = world
// Output: 
// 1
// Your Task:

// You only need to complet the function countVowels() that takes s as parameter and returns the count of vowels in the string. 

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
  for(auto i: str) {
      if(i == 'a'|| i== 'e' || i =='i' || i== 'o' || i=='u'){
          count++;
      }
     
  }
   return count;
    
}

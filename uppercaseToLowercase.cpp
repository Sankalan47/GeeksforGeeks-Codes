// Uppercase to Lowercase 
// Easy Accuracy: 87.91% Submissions: 668 Points: 2
// You are given a string s. You need to convert the case of uppercase letters to lowercase letters.

// Example 1:

// Input:
// GeekS

// Output: 
// geeks
// Example 2:

// Input:
// FOR

// Output: 
// for
// Your Task:

// You only need to complete the function caseConversion() that takes s as parameter and returns the converted string. 

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= |s| <= 10000

// { Driver Code Starts
//Initial Template for C++


//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

string caseConversion(string str);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	
	string s;
	cin >> s;
	
	cout << caseConversion(s) << endl;
	
	}
	
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string caseConversion(string str){
    //Your code here
    
    string str1;
    for(auto i: str){
        if(i>=65 && i<=90)
            i = i-65+97;
        str1 = str1 + i;    
    }
    return str1;
    
}


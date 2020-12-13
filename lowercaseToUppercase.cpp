// Lowercase to Upercase 
// You are given a string s. You need to convert the case of lowercase letter to uppercase letters.

// Example 1:

// Input:
// Geeks

// Output: 
// GEEKS
// Example 2:

// Input:
// for

// Output: 
// FOR
// Your Task:

// You only need to complete the function caseConversion() that takes s as parameter and returns the  converted string. 

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= |s| <= 10000

// { Driver Code Starts
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
    string str1;
    for(auto i: str) {
       if(i >=97 && i<=122)
            i = (i-97)+65;
        str1 = str1 +i;    
       
    }
    return str1;
    
}

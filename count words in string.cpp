//  Count Words in String 
// 
// You are given a string s consisting of multiple words. You need to count the total words in the string. Words are separated by a single space.

// Example 1:

// Input:
// s = Geeks

// Output: 
// 1
// Example 2:

// Input:
// s = World is hello

// Output: 
// 3
// Your Task:

// You only need to complet the function countWords() that takes s as parameter and returns the count of words in the string. 

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= |s| <= 10000

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
int countWords(string str);
int main() {
	int t;
	string tc;
    getline(cin, tc);
    t=stoi(tc);
	while(t--)
	{   
	    string s;
	    getline(cin, s);
	    cout << countWords(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

int countWords(string str){
    int count = 1;
    for(auto i: str){
        
        if(i== ' ')
            count++;
        
    }
    return count;
}

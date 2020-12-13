// Panagram Checking 
// You are given a string s. You need to find if the string is a panagram or not.
// A panagram contains all the letters of english alphabet at least once.

// Example 1:

// Input:
// s = Thequickbrownfoxjumpsoverthelazydog
// Output: 1
// Example 2:

// Input:
// s = HeavyDuty
// Output: 0
// Your Task:

// You only need to complete the function isPanagram() that takes s as parameter and returns either true or false. (the driver's code print 1 if the returned value is true, otherwise 0)

// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= |s| <= 10000

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// A panagram is a string with every letter in the english alphabet present in the string


bool isPanagram(string str);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << isPanagram(s) << endl;
	}
	
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

bool isPanagram(string str){

int count = 0;
while(count <= 26){
    for(auto i: str){
        if(i != (int('a')+count) || i !=(int('A')+count))
            return false;
    }
    count++;
}
return true;

}


// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

// Example 1:
// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]

// Example 2:
// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

Constraints:

1 <= s.length <= 105
s[i] is a printable ascii charact


class Solution {
public:
    void reverseString(vector<char>& s) {
        //method 1-->
        //in actually we are reversing  an array 
        reverse(s.begin(),s.end());
    }
};
// TC = O(n)
// SC = O(1)



class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>temp;
        //pushing string character in array 
        for(int i=s.size()-1;i>=0;i--){
            temp.push_back(s[i]);
        }

        s=temp;
        
    }
};
//tc----->o(n)
//sc----->o(n)



// Most optimized 

class Solution {
public:
    void reverseString(vector<char>& s) {

        int i=0;
        int j=s.size()-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }

    }
};
//tc------>o(n)
//sc------>o(1)
  

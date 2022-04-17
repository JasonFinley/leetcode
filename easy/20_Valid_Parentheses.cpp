#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i;

        for( i = 0 ; i < s.length() ; i++ )
        {
            if( s[i] == '(' || s[i] == '[' || s[i] == '{' ){
               st.push( s[i] );
            }else{
                if( st.empty() )
                 return false;

                if( st.top() == '(' && s[i] == ')' ){
                    st.pop();
                }else if( st.top() == '[' && s[i] == ']' ){
                    st.pop();
                }else if( st.top() == '{' && s[i] == '}' ){
                    st.pop();
                }else{
                    return false;
                }
            }
        }

        return st.empty();
    }
};

int main()
{
    Solution ss;
    string str = "{}()[{}[]]";

  cout << "str ? " << ss.isValid( str ) << endl;
  return 0;
}
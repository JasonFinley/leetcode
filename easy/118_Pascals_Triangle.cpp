#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int i, j;
        for( i = 0 ; i < numRows ; i++ )
        {
            vector<int> res( i + 1 );
            res[0] = 1;
            res[i] = 1;
            for( j = 1 ; j < i ; j++ )
            {
                res[j] = ans[i-1][j-1]+ans[i-1][j];
            }
            
            ans.push_back( res );
        }

        return ans;
    }
};

int main()
{
    Solution ss;
    ss.generate( 5 );

//    cout << "generate ? " << ss.generate( 5 ) << endl;
    
    return 0;
}
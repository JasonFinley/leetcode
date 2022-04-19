#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

/*APPROACH
for e.g for 4th row 4Co=1 4C1=4 4C2=6 4C3=4 4C4=1  {short tips & formulae: remember nC0=1 nCn=1 nC1=n always}
        
                   0  1  2  3  4        j columns
i rows
i=0                       1
i=1                     1   1
i=2                   1   2   1
i=3                 1   3   3   1
i=4               1   4   6   4   1

nC(r+1)-> nCr*Factor

4Co=1 4C1=4 4C2=6 4C3=4 4C4=1
Factor= nC(r+1)/nCr  ----> (n-r)/(r+1)  replace n with i & r with j


*/

class Solution {
public:

    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long val = 1; // we know the first value of each row is 1 only for e.g for 4th row 4Co=1
        
        for( int j = 0 ; j <= rowIndex ; j++ ){
            ans.push_back( val );
            val = val * ( rowIndex - j ) / ( j + 1 ); // (i-j)/(j+1) is a factor
        }
        return ans;       
    }
};

int main()
{
    Solution ss;
    ss.getRow( 5 );

//    cout << "generate ? " << ss.generate( 5 ) << endl;
    
    return 0;
}
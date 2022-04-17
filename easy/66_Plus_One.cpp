#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int cnt = digits.size();

        cnt -= 1;
        while( cnt >= 0 )
        {
            if( digits[ cnt ] < 9 ){
                digits[ cnt ] += 1;
                return digits;
            }else{

                digits[ cnt ] = 0;
                cnt -= 1;
            }
        }

        digits.insert(digits.begin(),1);
        return digits;
    }
};

int main()
{
    Solution ss;
    vector<int> arr = { 4,3,2,1,9,9,9,9 };
    ss.plusOne( arr );
    for( int i = 0 ; i < arr.size() ; i++ ){
        cout << "plusOne ? " << arr[i] << endl;
    }
    
    return 0;
}
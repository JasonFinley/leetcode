#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <math.h>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <sstream>

using namespace std;

class Solution {
public:
    int dexToBit( int dex )
    {
        int bit = 0;
        while( dex )
        {
            bit += ( dex & 1);
            dex = dex >> 1;
        }
        return bit;
    }
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        int h, m;
        for( h = 0 ; h < 12 ; h++ )
        {
            for( m = 0 ; m < 60 ; m++ )
            {
                int bitH = dexToBit( h );
                int bitM = dexToBit( m );
                if( bitH + bitM == turnedOn )
                {
                    string s = "";
                    if(m < 10)
                    {
                        s += to_string(h) + ":0" + to_string(m);
                    }
                    else
                    {
                        s += to_string(h) + ":" + to_string(m);
                    }
                    ans.push_back(s);
                }
            }
        }
        return ans;
    }
};

int main()
{
    Solution ss;
    string ransomNote = "aabb";
    vector<string> magazine;
    magazine = ss.readBinaryWatch( 5 );
//    cout << "wordPattern ? " << ss.reverseString( s ) << endl;
    
    return 0;
}
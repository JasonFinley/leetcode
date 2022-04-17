#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
              int i;
        int sum = 0;
        for( i = 0 ; i < s.length() ; i++ ){
            switch( s.at( i ) )
            {
                case 'I':
                {
                    if( (i + 1) >= s.length() )
                        sum += 1;
                    else if( s.at( i + 1 ) == 'V' ){
                        sum += 5 - 1;
                        i++;
                    }else if( s.at( i + 1 ) == 'X' ){
                        sum += 10 - 1;
                        i++;
                    }else
                        sum += 1;
                }
                break;
                case 'V':
                sum += 5;
                break;
                case 'X':
                {
                    if( (i + 1) >= s.length() )
                        sum += 10;
                    else if( s.at( i + 1 ) == 'L' ){
                        sum += 50 - 10;
                        i++;
                    }else if( s.at( i + 1 ) == 'C' ){
                        sum += 100 - 10;
                        i++;
                    }else
                        sum += 10;                    
                }
                break;
                case 'L':
                sum += 50;
                break;
                case 'C':
                {
                    if( (i + 1) >= s.length() )
                        sum += 100;
                    else if( s.at( i + 1 ) == 'D' ){
                        sum += 500 - 100;
                        i++;
                    }else if( s.at( i + 1 ) == 'M' ){
                        sum += 1000 - 100;
                        i++;
                    }else
                        sum += 100;
                }
                break;
                case 'D':
                sum += 500;
                break;
                case 'M':
                sum += 1000;
                break;
            }
        }
        
        return sum;  
    }
};

int main()
{
    Solution ss;
  cout << ss.romanToInt("MCMXCIV") << endl;
  return 0;
}
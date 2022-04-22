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
    int islandPerimeter(vector<vector<int>>& grid) {
        int res = 0;
        int row = grid.size();
        int col = grid[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1) {
                    if (j == 0 || grid[i][j - 1] == 0) res++;
                    if (j == col - 1 || grid[i][j + 1] == 0) res++;
                    if (i == 0 || grid[i - 1][j] == 0) res++;
                    if (i == row - 1 || grid[i + 1][j] == 0) res++;
                }
            }
        }
        return res;
    }
};

int main()
{
	vector<vector<int>> g; 
	vector<int> s{1,2}; 
	Solution sol;
	int ans = sol.islandPerimeter(g);
	
    cout << ans << endl;

    return 0;
}
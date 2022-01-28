class Solution
{
public:
    vector<int> findDiagonalOrder(vector<vector<int>> &matrix)
    {
        vector<int> ret;
        int row = 0;
        int col = 0;
        int n = matrix.size();
        int m = n ? matrix[0].size() : 0;
        bool down = false;
        for (int i = 0; i < n; i++)
        {
            int x = i;
            int y = 0;
            vector<int> temp;
            while (x >= 0 && y < m)
            {
                temp.push_back(matrix[x][y]);
                x--;
                y++;
            }
            if (down)
                reverse(temp.begin(), temp.end());
            for (int i = 0; i < temp.size(); i++)
                ret.push_back(temp[i]);
            down = !down;
        }
        for (int i = 1; i < m; i++)
        {
            int x = n - 1;
            int y = i;
            vector<int> temp;
            while (x >= 0 && y < m)
            {
                temp.push_back(matrix[x][y]);
                x--;
                y++;
            }
            if (down)
                reverse(temp.begin(), temp.end());
            for (int i = 0; i < temp.size(); i++)
                ret.push_back(temp[i]);
            down = !down;
        }
        
        return ret;
    }
};
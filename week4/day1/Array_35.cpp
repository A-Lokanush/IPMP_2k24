class Solution
{
public:
    void convertMatrix(vector<vector<int>> &mat)
    {
        int r = mat.size();
        int c = mat[0].size();
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (mat[i][j] == 1)
                {
                    for (int k = 0; k < c; k++)
                    {
                        mat[i][k] = -1;
                    }
                    for (int k = 0; k < r; k++)
                    {
                        mat[k][j] = -1;
                    }
                    break;
                }
            }
        }
        for (int l = 0; l < r; l++)
        {
            for (int m = 0; m < c; m++)
            {
                if (mat[l][m] == -1)
                    mat[l][m] = 1;
            }
        }
    }
};
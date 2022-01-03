class Solution {
public:
    
    vector<int> getPerfectSquares(int n){
    vector<int> perfectSquares;
    int current = 1, i = 1;
    while (current <= n)
    {
        perfectSquares.push_back(current);
        current = pow(++i, 2);
    }
    return perfectSquares;
    }
    
    int countTriples(int n) {
        vector<int> perfectSquares = getPerfectSquares(pow(n, 2));
    int count = 0;
    for(int a = 1; a <= n; a++)
    {
        int aSquare = pow(a, 2);
        for(int i = 0; i < perfectSquares.size(); i++)
        {
            int cSquare = perfectSquares[i];
            int bSquare = abs(cSquare - aSquare);
            int b = sqrt(bSquare);
            int c = sqrt(cSquare);
            if (c < a || (find(perfectSquares.begin(),
                               perfectSquares.end(),
                               bSquare) ==
                               perfectSquares.end()))
                continue;
            if ((b >= a) && (b <= c) &&
                (aSquare + bSquare == cSquare))
                count++;
        }
    }
    return count*2;
    }
};
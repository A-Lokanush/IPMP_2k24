// max size of square sub matrix with all 1s

void printMaxSubSquare(bool M[R][C])
{
    int S[2][C], Max = 0;

    memset(S, 0, sizeof(S));

    for (int i = 0; i < R;i++)
        for (int j = 0; j < C;j++){

            int Entrie = M[i][j];
            if(Entrie)
                if(j)
                    Entrie = 1 + min(S[1][j - 1], min(S[0][j - 1], S[1][j]));

            S[0][j] = S[1][j];
            S[1][j] = Entrie;

            Max = max(Max, Entrie);
        }
     cout << "Maximum size sub-matrix is: \n";
    for (int i = 0; i < Max; i++, cout << '\n')
        for (int j = 0; j < Max;j++)
            cout << "1 ";
}

int PermutationCoeff(int n, int k)
{
    int P = 1;
    for (int i = 0; i < k; i++)
        P *= (n-i) ;
 
    return P;
}
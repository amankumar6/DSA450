// A O(n) solution that uses
// table fact[] to calculate
// the Permutation Coefficient
#include<bits/stdc++.h>
using namespace std;

// Returns value of Permutation
// Coefficient P(n, k)
int permutationCoeff(int n, int k)
{
    int fact[n + 1];
    fact[0] = 1;
    for(int i = 1; i <=n; i++) fact[i] = fact[i-1] * i;
    return fact[n]/ fact[n - k];
}

// Driver Code
int main()
{
	int n = 10, k = 2;
	
	cout << "Value of P(" << n << ", "
		<< k << ") is "
		<< permutationCoeff(n, k);

	return 0;
}

int PermutationCoeff(int n, int k)
{
    int P = 1;
    for (int i = 0; i < k; i++) P *= (n-i) ;
    return P;
}

// This code is contributed by shubhamsingh10

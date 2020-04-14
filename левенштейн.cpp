#include <iostream>
using namespace std;
int Levenstein(string S1, string S2, int InsertCost, int DeleteCost, int ReplaceCost)
{
	int M = S1.size();
	int N = S2.size();
	int D[M + 1][N + 1];
	D[0][0] = 0;
	for (int j = 1; j < N + 1; ++j)
	{
		D[0][j] = D[0][j - 1] + InsertCost;
	}
	for (int i = 1; i < M + 1; ++i)
	{
		D[i][0] = D[i - 1][0] + DeleteCost;
		for (int j = 1; j < N + 1; ++j)
		{
			if (S1[i - 1] != S2[j - 1])
			{
				D[i][j] = min(D[i - 1][j] + DeleteCost, min(
					D[i][j - 1] + InsertCost,
					D[i - 1][j - 1] + ReplaceCost));
			}
			else
			{
				D[i][j] = D[i - 1][j - 1];
			}
		}
	}
	return D[M][N];
}
int main() {
	string S1;
	string S2;
	int DeleteCost = 1;
	int InsertCost = 1;
	int ReplaceCost = 1;
	cin >> S1 >> S2;
	cout << Levenstein(S1, S2, InsertCost, DeleteCost, ReplaceCost);
	return 0;
}
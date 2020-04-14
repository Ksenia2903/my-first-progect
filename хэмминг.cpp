#include <iostream>
using namespace std;
int Hamming(string s1, string s2)
{
	int i = 0;
	if (s1.size() != s2.size())
	{
		return 0;
	}
	for (int j = 0; j < s1.size(); ++j)
	{
		if (s1[j] != s2[j])
		{
			++i;
		}
	}
	return i;

}
int main() {
	string s1;
	string s2;
	cin >> s1 >> s2;
	cout << Hamming(s1, s2);
	return 0;
}
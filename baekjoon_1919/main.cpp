#include <iostream>
#include <string>
using namespace std;

string a, b;
int na[26], nb[26], r;

int main() {
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++) na[a.at(i) - 'a']++;
	for (int i = 0; i < b.size(); i++) nb[b.at(i) - 'a']++;
	for (int i = 0; i < 26; i++) r += abs(na[i] - nb[i]);
	cout << r;
	return 0;
}
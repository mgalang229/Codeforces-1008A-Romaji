#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	// every consonant MUST be followed by a vowel except for letter 'n'
	// the string MUST end with a vowel or letter 'n'
	auto Vowel = [&](char c) {
		return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	};
	bool checker = true;
	for (int i = 0; i < (int) s.size() - 1; i++) {
		if (!Vowel(s[i]) && !Vowel(s[i + 1]) && s[i] != 'n') {
			checker = false;
			break;
		}
	}
	cout << (checker && (Vowel(s.back()) || s.back() == 'n') ? "YES " : "NO") << '\n';
	return 0;
}

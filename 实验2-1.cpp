#include<iostream>
using namespace std;
int main() {
	char ch;
	cin >> ch;
		if (ch >= 'a' && ch <= 'z') {
		ch = ch - 32;
		cout << ch << endl;
	}
		else {
			char c = ch + 1;
			int ascii = static_cast<int>(c);
			cout << "'" << c << "'" << "µÄASCIIÂëÖµÎª£º" << ascii << endl;
	}
		return 0;
}
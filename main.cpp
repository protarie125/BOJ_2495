#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	for (auto t = 0; t < 3; ++t) {
		string s; cin >> s;
		auto ans = int{ 1 };
		auto now = char{};
		auto nowlen = int{ 0 };
		for (auto i = 0; i < 8; ++i) {
			if (s[i] == now) {
				++nowlen;
			}
			else {
				if (ans < nowlen) {
					ans = nowlen;
				}

				now = s[i];
				nowlen = 1;
			}
		}

		if (ans < nowlen) {
			ans = nowlen;
		}

		cout << ans << '\n';
	}

	return 0;
}
#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

class Solution {
	public:
		int lengthOfLongestSubstring(string s) {
			int res = 0, left = -1, n = s.size();
			unordered_map<int, int> m;
			for(int i=0; i < n; ++i) {
				if(m.count(s[i]) && m[s[i]] > left) {
					left = m[s[i]];
				}
				m[s[i]] = i;
				res = max(res, i - left);
			}
			return res;

		}

};


int main() {
	string a = "abcabcbb";
	cout << Solution().lengthOfLongestSubstring(a) << endl;

	string b = "bbbbb";
	cout << Solution().lengthOfLongestSubstring(b) << endl;

	string c = "pwwkew";
	cout << Solution().lengthOfLongestSubstring(c) << endl;

	return 0;
}

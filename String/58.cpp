#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int lengthOfLastWord(string s) {
            int count = 0;
            bool word_started = false;
            for (int i = s.size() - 1; i>=0; i--) {
                if (s[i] != ' ') {
                    word_started = true;
                    count++;
                } else {
                    if (word_started)
                        return count;
                    continue;
                }
            }
            return count;
        }
    };
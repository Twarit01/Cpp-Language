#include <iostream>
using namespace std;
bool isWeightedSubstring(string &s, int query) {
    for (int i = 0; i < s.size(); i++) {
        int charWeight = s[i] - 'a' + 1;
        int weight = 0;
        // Check consecutive occurrences
        for (int j = i; j < s.size() && s[j] == s[i]; j++) {
            weight += charWeight;
            if (weight == query) return true;
        }
    }
    return false;
}
int main() {
    string s;
    int q, query;
    cin >> s >> q;
    while (q--) {
        cin >> query;
        cout << (isWeightedSubstring(s,query) ? "Yes" : "No") << endl;
    }
    return 0;
}
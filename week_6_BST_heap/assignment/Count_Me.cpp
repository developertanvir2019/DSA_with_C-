#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string sentence;
        getline(cin, sentence);

      map<string, int> word_cnt;
        stringstream ss(sentence);
        string word;
        string FreqWord;
        int max_cnt = 0;

        while (ss >> word) {
            word_cnt[word]++;
            if (word_cnt[word] > max_cnt) {
                max_cnt = word_cnt[word];
                FreqWord = word;
            }
        }

        cout << FreqWord << " " << max_cnt << endl;
    }

    return 0;
}

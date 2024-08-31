#include <bits/stdc++.h>
using namespace std;

class cmp
{
public:
    bool operator()(pair<string, int> &a, pair<string, int> &b)
    {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    }
};

int main()
{
    int n;
    cin >> n;
    priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq; 
    for (int i = 0; i < n; i++)
    {
        string s;
        int num;
        cin >> s >> num;
        pq.push({s, num});
    }
    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << endl;
        pq.pop();
    }
    return 0;
}

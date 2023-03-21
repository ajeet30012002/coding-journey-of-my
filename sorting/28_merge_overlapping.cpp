#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct point
{
    int s, e;
};

bool mycomp(const point &p1, const point &p2)
{
    return (p1.s < p2.s);
}

int main()
{
    cout << "Enter the size of the intervals: " << endl;
    int size;
    vector<vector<int>> intervals({{5, 10}, {3, 15}, {18, 30}, {2, 7}});
    vector<vector<int>> ans;
    size = intervals.size();
    vector<point> vec1;
    for (int i = 0; i < intervals.size(); i++)
    {
        struct point p = {intervals[i].at(0), intervals[i].at(1)};
        vec1.push_back(p);
    }
    sort(vec1.begin(), vec1.end(), mycomp);
    int res = 0;
    for (int i = 1; i < vec1.size(); i++)
    {
        if (vec1[res].e <= vec1[i].s)
        {
            vec1[res].s = min(vec1[res].s, vec1[i].s);
            vec1[res].e = max(vec1[res].e, vec1[i].e);
            ans.push_back(vec1[res]);
        }
        else
        {
            res++;
            ans.push_back(vec1[i]);
        }
    }
    cout << "{";
    for (auto x : ans)
    {
        cout << "{" << x.s << "," << x.e << "}";
    }
    cout << "}";
    return 0;
}

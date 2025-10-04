#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void merge(vector<int> &v1, vector<int> &v2, vector<int> &v3)
{
    int i = 0, j = 0, k = 0, m = v1.size(), n = v2.size();
    while (i < m && j < n)
    {
        if (v1[i] <= v2[j])
        {
            v3.push_back(v1[i]);
            i++;
        }
        else
        {
            v3.push_back(v2[j]);
            j++;
        }
    }
    if (i == m)
    {
        while (j < n)
        {
            v3.push_back(v2[j]);
            j++;
            k++;
        }
    }
    else if (j == n)
    {
        while (i < m)
        {
            v3.push_back(v1[i]);
            i++;
            k++;
        }
    }
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(6);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3;

    display(v1);
    display(v2);
    merge(v1, v2, v3);
    display(v3);

    return 0;
}
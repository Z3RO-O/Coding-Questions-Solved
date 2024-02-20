#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(2));
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i][0] >> A[i][1];
    }

    // Create an array to keep track of each point's coverage count
    const int maxPoints = 2 * 100005; // Adjust this value based on the maximum range
    vector<int> coverageCount(maxPoints, 0);

    // Calculate coverage for each segment
    for (int i = 0; i < n; ++i)
    {
        coverageCount[A[i][0]]++;
        coverageCount[A[i][1] + 1]--;
    }

    // Calculate the prefix sum to find the coverage count for each point
    for (int i = 1; i < maxPoints; ++i)
    {
        coverageCount[i] += coverageCount[i - 1];
    }

    // Count the points with each coverage count
    vector<int> ans(n + 1, 0);
    for (int i = 0; i < maxPoints; ++i)
    {
        if (coverageCount[i] > 0)
        {
            ans[coverageCount[i]]++;
        }
    }

    // Calculate cumulative sum for ans
    for (int i = 2; i <= n; ++i)
    {
        ans[i] += ans[i - 1];
    }

    // Adjust the result array to start with 0
    ans.insert(ans.begin(), 0);

    // Print the result array
    for (int i = 1; i <= n; ++i)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
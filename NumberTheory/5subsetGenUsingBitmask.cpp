// #include <bits/stdc++.h>
// using namespace std;
// /*
// here we have considered numbers form zero to (2**n) as masks of the subsets of the array.
// we just have to check the set digit of the mask(0-7) and append the element of array which is present at that index in the array.
// */

// vector<vector<int>> subsetsGen(vector<int> &nums)
// {
//     int n = nums.size();
//     int subset_cnt = 1 << n;

//     vector<vector<int>> subsets;
//     for (int mask = 0; mask < (1 << n); mask++)
//     {
//         vector<int> subset;
//         for (int i = 0; i < n; i++)
//         {
//             if ((mask & (1 << i)) != 0)
//             {
//                 subset.push_back(nums[i]);
//             }
//         }
//         subsets.push_back(subset);
//     }

//     return subsets;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> nums;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         nums.push_back(x);
//     }

//     auto subsets = subsetsGen(nums);
//     for (auto subset : subsets)
//     {
//         cout << "[ ";
//         for (auto ele : subset)
//             cout << ele << ' ';
//         cout << " ]";
//         cout << endl;
//     }

//     return 0;
// }

// /*

// 3
// 2  4  7

// */

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsetgen(vector<int> &nums)
{
    int n = nums.size();
    int sub_cnt = 1 << n;
    vector<vector<int>> subsets;
    for (int mask = 0; mask < sub_cnt; mask++)
    {
        vector<int> subset;
        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
                subset.push_back(nums[i]);
        }
        subsets.push_back(subset);
    }
    return subsets;
}

int main()
{

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    auto ans = subsetgen(nums);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << ' ';
        }

        cout << "]";
        cout << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree<pair<int,int>, null_type, less_equal<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        ordered_set m;

        // order_of_key-> Returns the index of the element from the ordered set(0 based indexing).

        // find_by_order-> returns the element at the kth position. 
        // Returns iterator need to convert it into appropriate data type using * operator.

        //Steps to search and then delete an element from the ordered set.
        //1) Find the element from the ordered set.
        int t=0;
        int k=m.order_of_key({nums[t],t}); 

        //2) Erase it based upon it's position.
        m.erase(m.find_by_order(k));

    }
};
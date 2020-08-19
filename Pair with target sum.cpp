using namespace std;

#include <iostream>
#include <vector>

class PairWithTargetSum {
 public:
  static pair<int, int> search(const vector<int>& arr, int targetSum) {
    // TODO: Write your code here
    int sum = 0;
    int start=0,end=arr.size()-1;

    while(sum!=targetSum || start<end )
    {
      sum = arr[start]+arr[end];
      if(sum<targetSum)
      start++;
      else if (sum>targetSum)
      end--;
      else
      break;

    }
    return make_pair(start,end);
  }
};

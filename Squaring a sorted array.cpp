using namespace std;

#include <iostream>
#include <vector>

class SortedArraySquares {
 public:
  static vector<int> makeSquares(const vector<int>& arr) {
    int n = arr.size();
    vector<int> squares(n);
    // TODO: Write your code here
    int p1=0;
    int p2=arr.size()-1;
    int end_idx =p2;
    while(end_idx>0)
    {
      int num_l = arr[p1]*arr[p1];
      int num_r = arr[p2]*arr[p2];

      if(num_l>num_r){
        squares[end_idx--]=num_l;
        squares[end_idx--]=num_r;

      }
      else
      {
        squares[end_idx--]=num_r;
        squares[end_idx--]=num_l;
      }
      p1++;
      p2--;

    }
    return squares;
  }
};

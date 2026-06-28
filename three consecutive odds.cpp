#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
bool twoconsecutiveodds(vector<int> &arr){
  int n=arr.size();
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
      count++;
      if(count==3) return true;
    } else {
      count=0;
    }
  }
  return false;
  }
};
int main(){
  vector<int> arr={1,2,1,1};
  Solution sol;
  cout << sol.twoconsecutiveodds(arr) << endl;
  return 0;
}

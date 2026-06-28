//approach-1

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
int countodds(vector<int> &arr){
  int n=arr.size();
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
      count++;
      }
    } 
  return count;
  }
};
int main(){
  vector<int> arr={1,2,3,7,9,10};
  Solution sol;
  cout << "THE NUMBER OF ODD ELEMENTS IN THE ARRAY IS: ";
  cout << sol.countodds(arr) << endl;
  return 0;
}

//approach-2
//approach-2
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,7,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    cout << "THE NUMBER OF ODD ELEMENTS IN THE ARRAY IS: " << count << endl;
    return 0;
}

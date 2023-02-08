#include <iostream>
#include <map>

using namespace std;

int main() {
//   int arr[] = {1, 5, 2, 1, 8, 2, 8};
//   int n = sizeof(arr) / sizeof(arr[0]);
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
  
  map<int, int> freq;
  
  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
  }
  
  for (auto x : freq) {
    if (x.second > 1) {
      cout << x.first << " repeated " << x.second << " times" << endl;
    }
  }
  
  return 0;
}

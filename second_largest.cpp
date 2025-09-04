#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(const vector<int>& arr) {
    // TODO: complete the function as per instructions
    int largest = INT_MIN;
    int second = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            second = largest;
            largest = num; }
        else if (num > second && num < largest) {
            second = num;
        }
    }
    if (second == INT_MIN) {
        cout<< "No second largest element exists!" << endl;
        return INT_MIN;
    }
    return second;

}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << secondLargest(arr) << "\n";
    return 0;
}


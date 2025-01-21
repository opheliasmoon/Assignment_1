#include<vector>
#include<iostream>
#include<string>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;

void matrix() {
    int a = 0;
    int b = 0;
    vector<int> nums;
    cout << "Give me a number of rows: ";
    cin >> a;
    cout << endl << "Give me a number of columns: ";
    cin >> b;
    cout << endl;
    srand(time(0));
    int randomNum = 0;
    for(int i = 0;i<a*b;i++) {
        randomNum = -100 + (rand() % (100 - (-100) + 1));
        nums.push_back(randomNum);
    }
    for(int i = 0;i<a;i++) {
      for(int j = 0;j<b;j++) {
        cout << nums[i*b+j] << " ";
      }
      cout << endl;
    }
}

int main() {
    matrix();
    return 0;
}

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class MedianFinder {
    priority_queue<int> leftHeap;  // max heap
    priority_queue<int, vector<int>, greater<int>> rightHeap; // min heap

public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        leftHeap.push(num);
        rightHeap.push(leftHeap.top());
        leftHeap.pop();
        
        if (rightHeap.size() > leftHeap.size()) {
            leftHeap.push(rightHeap.top());
            rightHeap.pop();
        }
    }
    
    double findMedian() {
        if (leftHeap.size() == rightHeap.size()) {
            return (leftHeap.top() + rightHeap.top()) / 2.0;
        }
        return leftHeap.top();
    }
};

int main() {
    MedianFinder mf;

    mf.addNum(5);
    cout << "Median: " << mf.findMedian() << endl;

    mf.addNum(15);
    cout << "Median: " << mf.findMedian() << endl;

    mf.addNum(1);
    cout << "Median: " << mf.findMedian() << endl;

    mf.addNum(3);
    cout << "Median: " << mf.findMedian() << endl;

    return 0;
}

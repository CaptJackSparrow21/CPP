//https://takeuforward.org/plus/dsa/problems/implement-min-heap?source=strivers-a2z-dsa-track

#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    vector<int> heap;

    void initializeHeap() { 
        heap.clear();
    }

    void heapifyUp(int i) {
        while(i > 0) {
            int parent = (i - 1) / 2;
            if(heap[parent] > heap[i]) {
                swap(heap[parent], heap[i]);
                i = parent;
            }
            else break;
        }
    }

    void heapifyDown(int i) {
        int n = heap.size();
        while(true) {
            int smallest = i;
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            if(left < n && heap[left] < heap[smallest])
                smallest = left;
            if(left < n && heap[right] < heap[smallest])
                smallest = right;
            if(smallest != i) {
                swap(heap[i], heap[smallest]);
                i = smallest;
            }
            else break;
        }
    }

    void insert(int key) {
        heap.push_back(key);
        heapifyUp(heap.size()-1);
    }

    void changeKey(int index, int new_val) {
        heap[index] = new_val;
        heapifyUp(index);
        heapifyDown(index);
    }

    void exctractMin() {    
        if(heap.empty()) return;
        heap[0] = heap.back();
        heap.pop_back();
        if(!heap.empty()) heapifyDown(0);
    }

    bool isEmpty() {
        return heap.empty();
    }

    int getMin() {  
        return heap[0];
    }

    int heapSize() {
        return heap.size();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    return 0;
}
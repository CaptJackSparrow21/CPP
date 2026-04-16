//https://takeuforward.org/data-structure/introduction-to-priority-queues-using-binary-heaps

#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Function	             Time Complexity
// Insert() : 	            O(logN)
// Heapify():	            O(logN)
// getMin():	            O(1)
// ExtractMin():	        O(logN)
// Decreasekey():	        O(logN)
// Delete():	            O(logN)

class BinaryHeap {
public:
    //max elements that can be stored in heap
    int capacity;

    //current no. of elements in heap
    int size;

    //array for storing the keys
    int *arr;

    BinaryHeap(int cap) {
        //assigning the capacity
        capacity = cap;

        //initialize size of heap is zero
        size = 0;

        //creating an array
        arr = new int[capacity];
    }

    //Returns the parent of ith Node
    int parent(int i) {
        return (i - 1) / 2;
    }

    //return left child of ith node
    int left(int i) {
        return 2 * i + 1;
    }

    //return right child of ith node
    int right(int i) {
        return 2 * i + 2;
    }

    //insert a new key x
    void insert(int x) {
        if(size == capacity) {
            cout << "Binary Heap Overflow" << endl;
            return;
        }

        //insert new element at end
        arr[size] = x;

        //store the index, for checking heap property
        int k = size;

        //increase the size
        size++;

        //fix the min heap propery
        while(k != 0 && arr[parent(k)] > arr[k]) {
            swap(arr[parent(k)], arr[k]);
            k = parent(k);
        }
    }

    void Heapify(int ind) {
        //right child
        int ri = right(ind);

        //left child
        int li = left(ind);

        //initially assume violated value is minimum
        int smallest = ind;

        if(li < size && arr[li] < arr[smallest])
            smallest = li;

        if(ri < size && arr[ri] < arr[smallest])
            smallest = ri;

        //if the minimum among the three node is not the parent
        //itself, then swap and call Heapify recursively

        if(smallest != ind) {
            swap(arr[ind], arr[smallest]);
            Heapify(smallest);
        }
    }

    int getMin() {
        return arr[0];
    }

    int extractMin() {
        if(size <= 0)
            return INT_MAX;

        if(size == 1) {
            size--;
            return arr[0];
        }

        int mini = arr[0];

        //copy last node value to root node
        arr[0] = arr[size - 1];

        size--;

        //call heapify on root node
        Heapify(0);

        return mini;
    }

    void decreaseKey(int i, int val) {
        //updating the new value
        arr[i] = val;

        //fixing the Min heap
        while(i != 0 && arr[parent(i)] > arr[i]) {
            swap(arr[parent(i)], arr[i]);
            i = parent(i);
        }
    }

    void deleteKey(int i) {
        decreaseKey(i, INT_MIN);
        extractMin();
    }

    void print() {
        for(int i=0; i<size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    return 0;
}


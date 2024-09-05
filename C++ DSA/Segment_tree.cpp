#include <iostream>
using namespace std;

void buildTree(int* tree, int* arr, int start, int end, int node) {
    if (start == end) {
        tree[node] = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    buildTree(tree, arr, start, mid, 2 * node);
    buildTree(tree, arr, mid + 1, end, 2 * node + 1);
    tree[node] = min(tree[2 * node], tree[2 * node + 1]);
}

int query(int* tree, int start, int end, int l, int r, int node) {
    if (start > r || end < l) return INT_MAX;
    if (start >= l && end <= r) return tree[node];

    int mid = (start + end) / 2;
    int left = query(tree, start, mid, l, r, 2 * node);
    int right = query(tree, mid + 1, end, l, r, 2 * node + 1);
    return min(left, right);
}

int main() {
    int arr[] = {1, 3, 2, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int tree[4 * n];

    buildTree(tree, arr, 0, n - 1, 1);
    cout << "Minimum value between index 1 and 4: " << query(tree, 0, n - 1, 1, 4, 1) << endl; // Output: 2

    return 0;
}

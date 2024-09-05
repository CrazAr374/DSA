#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // Output: 10
    cout << "Back: " << q.back() << endl; // Output: 30

    q.pop();
    cout << "After pop, Front: " << q.front() << endl; // Output: 20

    return 0;
}

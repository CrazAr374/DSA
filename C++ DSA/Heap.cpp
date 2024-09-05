#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> umap;
    
    // Insert elements
    umap["apple"] = 10;
    umap["banana"] = 20;
    umap["orange"] = 30;

    // Accessing elements
    for (auto pair : umap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Searching for an element
    string key = "banana";
    if (umap.find(key) != umap.end()) {
        cout << key << " found with value: " << umap[key] << endl;
    } else {
        cout << key << " not found" << endl;
    }

    return 0;
}

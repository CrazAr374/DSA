#include <iostream>
#include <unordered_map>
using namespace std;

class TrieNode {
public:
    unordered_map<char, TrieNode*> children;
    bool isEndOfWord;

    TrieNode() {
        isEndOfWord = false;
    }
};

class Trie {
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;
        for (char c : word) {
            if (!node->children[c])
                node->children[c] = new TrieNode();
            node = node->children[c];
        }
        node->isEndOfWord = true;
    }

    bool search(string word) {
        TrieNode* node = root;
        for (char c : word) {
            if (!node->children[c])
                return false;
            node = node->children[c];
        }
        return node->isEndOfWord;
    }
};

int main() {
    Trie trie;
    trie.insert("hello");
    trie.insert("world");

    cout << "Search for 'hello': " << trie.search("hello") << endl; // Output: 1 (true)
    cout << "Search for 'world': " << trie.search("world") << endl; // Output: 1 (true)
    cout << "Search for 'hi': " << trie.search("hi") << endl; // Output: 0 (false)

    return 0;
}

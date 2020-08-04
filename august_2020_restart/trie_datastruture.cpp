#include <bits/stdc++.h>
using namespace std;
const int size = 26;
struct TrieNode
{
    struct TrieNode *child[size];
    bool eow;
};
struct TrieNode *getNode()
{
    struct TrieNode *p = new TrieNode;
    p->eow = false;
    for (int i = 0; i < size; i++)
        p->child[i] = NULL;
    return p;
}
void insert(struct TrieNode *root, string key)
{
    struct TrieNode *p = root;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!p->child[index])
            p->child[index] = getNode();
        p = p->child[index];
    }
    p->eow = true;
}
bool search(struct TrieNode *root, string key)
{
    struct TrieNode *p = root;
    for (int i = 0; i < key.length(); i++)
    {
        int index = key[i] - 'a';
        if (!p->child[index])
            return false;
        p = p->child[index];
    }
    return (p != NULL && p->eow);
}
int main()
{
    string keys[] = {"the", "a", "there",
                     "answer", "any", "by",
                     "bye", "their"};
    int n = sizeof(keys) / sizeof(keys[0]);
    struct TrieNode *root = getNode();
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);
    search(root, "the") ? cout << "Yes\n" : cout << "No\n";
    search(root, "these") ? cout << "Yes\n" : cout << "No\n";
    return 0;
}
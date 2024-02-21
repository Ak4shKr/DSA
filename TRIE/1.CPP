// #include <bits/stdc++.h>
// using namespace std;

// class TrieNode
// {
// public:
//     char data;
//     TrieNode *children[26];
//     bool isTerminal;

//     TrieNode(char ch)
//     {
//         data = ch;
//         for (int i = 0; i < 26; i++)
//         {
//             children[i] = NULL;
//         }
//         isTerminal = false;
//     }
// };

// class Trie
// {
// public:
//     TrieNode *root;
//     Trie()
//     {
//         root = new TrieNode('\0');
//     }
//     void insertUtil(TrieNode *root, string word)
//     {
//         // base case
//         if (word.length() == 0)
//         {
//             root->isTerminal = true;
//             return;
//         }

//         // assumption word will be in caps only
//         int index = word[0] - 'A';
//         TrieNode *child;

//         // present
//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }
//         else
//         {
//             // absent
//             child = new TrieNode(word[0]);
//             root->children[index] = child;
//         }

//         // RECURSION
//         insertUtil(child, word.substr(1));
//     }

//     void insertWord(string word)
//     {
//         insertUtil(root, word);
//     }

//     bool searchUtil(TrieNode *root, string word)
//     {
//         // base case
//         if (word.length() == 0)
//         {
//             return root->isTerminal;
//         }
//         int index = word[0] - 'A';
//         TrieNode *child;

//         // present
//         if (root->children[index] != NULL)
//         {
//             child = root->children[index];
//         }
//         else
//         {
//             // absent
//             return false;
//         }

//         // recursion
//         return searchUtil(child, word.substr(1));
//     }

//     bool search(string word)
//     {
//         return searchUtil(root, word);
//     }
// };

// int main()
// {
//     Trie *t = new Trie();
//     t->insertWord("ARM");
//     t->insertWord("DO");
//     t->insertWord("TIME");

//     cout << "present or not:  " << t->search("TIME") << endl;
//     cout << "present or not:  " << t->search("TIM") << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 5;
    int y = 5;

    x++;
    x++;
    ++y;
    cout << x << " " << y << endl;
    return 0;
}
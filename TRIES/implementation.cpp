#include<iostream>
using namespace std;

class TrieNode
{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        //constructor
        TrieNode(char ch)
        {
            data=ch;
            for(int i=0;i<26;i++)
            {
                children[i]=NULL;
            }
            isTerminal=false;
        }
};

class Trie
{
    public:
        TrieNode* root;

        //constructor
        Trie()
        {
            root=new TrieNode('\0');
        }

        void insertUtil(TrieNode* root,string word)
        {
            //base case
            if(word.size() == 0)
            {
                root->isTerminal=true;
                return;
            }
            //assumption that the word will be in CAPS
            int index=word[0]-'A';
            TrieNode* child;

            //present
            if(root->children[index] != NULL)
            {
                child=root->children[index];
            }
            else
            {
                //absent
                child=new TrieNode(word[0]);
                root->children[index]=child; 
            }

            //aage recursion sambhal lega.....
            insertUtil(child,word.substr(1));

        }

        void insertWord(string word)
        {
            insertUtil(root,word);
        }


        bool searchUtil(TrieNode* root,string word)
        {
            if(word.size()== 0)
            {
                return root->isTerminal;
            }

            int index=word[0]-'A';
            TrieNode* child;

            if(root->children[index] != NULL)
            {
                child=root->children[index];
            }
            else
            {
                return false;
            }
            //Recursion
            return searchUtil(child,word.substr(1));
        }


        bool serarchWord(string word)
        {
            return searchUtil(root,word);
        }


};

int main()
{
    Trie *t=new Trie();

    t->insertWord("ANIMISH");
    t->insertWord("TRIPATHY");

    cout << t->serarchWord("ANIMIS");
}
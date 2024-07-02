struct Node
{
    Node* links[26]; // 26 lower english alphabets hai
    bool flag=false; // initially flag set to false


bool containsKey(char ch)
{
   return links[ch-'a']!=NULL;
   // !=NULL means it is present
}

void put(char ch, Node* node)
{
    links[ch-'a']=node;
}
Node* get(char ch)
{
    return links[ch-'a'];
}

void setend()
{
    flag=true;
}
bool isend()
{

    return flag;
}
};

class Trie {
    private: Node* root;
public:
    Trie() {
        root=new Node();

    }
    
    void insert(string word) {
        Node* node=root;
        for(int i=0;i<word.length();i++)
        {
            if(!node->containsKey(word[i]))
            {
              node->put(word[i], new Node());
            }
           node= node->get(word[i]);
        }
          node->setend();
    }
    
    bool search(string word) {
        Node* node=root;
        for(int i=0;i<word.length();i++)
        {
            if(!node->containsKey(word[i])) return false;
           node= node->get(word[i]);
        }
       // see if it is end or not
       return node->isend();

    }
    
    bool startsWith(string prefix) {
        Node* node=root;
        for(int i=0;i<prefix.length();i++)
        {
            if(!node->containsKey(prefix[i]))
            {
                return false;
            }
            node = node->get(prefix[i]);
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
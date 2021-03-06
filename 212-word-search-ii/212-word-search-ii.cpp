struct Trie {
    vector<Trie*> children;
    bool endOfWord;
    Trie()
    {
        children.resize(26,NULL);
        endOfWord = false;
    }
};
class Solution {
    private:
    int MAX_LEN;
    vector<string> result;
    void insert(Trie* &root, string word)
    {
        Trie *node = root;
        for(int i = 0; i < word.length(); i++)
        {
            if(node->children[word[i]-'a'] == NULL)
                node->children[word[i]-'a'] = new Trie();
            node = node->children[word[i]-'a'];
        }
        node->endOfWord = true;
    }
    void dfs(vector<vector<char>> &board, Trie* &node, string word, int i, int j)
    {
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] == '-')
            return;
        char ch = board[i][j];
        if(node->children[ch-'a'] == NULL)
            return;
        Trie* child = node->children[ch-'a'];
        word = word + ch;
        if(child->endOfWord)
        {
            result.push_back(word);
            child->endOfWord = false;
        }
        if(word.length() >= MAX_LEN)
            return;
        board[i][j] = '-';
        dfs(board,child,word,i+1,j);
        dfs(board,child,word,i-1,j);
        dfs(board,child,word,i,j+1);
        dfs(board,child,word,i,j-1);
        board[i][j] = ch;
    }
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie* node = new Trie();
        MAX_LEN=0;
        for(auto word : words)
        {
            insert(node,word);
            MAX_LEN = max(MAX_LEN,int(word.length()));
        }
        
        for(int i = 0; i < board.size(); i++)
            for(int j = 0; j < board[0].size(); j++)
                dfs(board,node,"",i,j);
                
        return result;
    }
};




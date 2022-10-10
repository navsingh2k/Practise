#include <bits/stdc++.h>
using namespace std;

struct Trie
{

	// isEndOfWord is true if the node
	// represents end of a word
	bool isEndOfWord;

	/* nodes store a trie to child node */
	unordered_map<char, Trie *> trie;
};

/*function to make a new trie*/
Trie *getNewTrieNode()
{
	Trie *node = new Trie;
	node->isEndOfWord = false;
	return node;
}

/*function to insert in trie*/
void insert(Trie *&root, const string &str)
{
	if (root == nullptr)
		root = getNewTrieNode();

	Trie *temp = root;
	for (int i = 0; i < str.length(); i++)
	{
		char x = str[i];

		/* make a new node if there is no path */
		if (temp->trie.find(x) == temp->trie.end())
			temp->trie[x] = getNewTrieNode();

		temp = temp->trie[x];
	}

	temp->isEndOfWord = true;
}

// function to return starting index of suffixes
vector<int> sufStIndex(string s, Trie *root)
{
	vector<int> indices;
	if (root == NULL)
	{
		return indices;
	}
	Trie *cur = root;
	for (int i = 0; i < s.length(); i++)
	{
		if (cur->trie.find(s[i]) == cur->trie.end())
		{

			return indices;
		}
		cur = cur->trie[s[i]];
		if (cur->isEndOfWord)
		{
			indices.push_back(i + 1);
		}
	}

	return indices;
}

void openFile(ifstream &inFile, string fname)
{
	inFile.open(fname);
	if (inFile.is_open())
	{
		cout << "Successfully opened file" << endl;
	}
	else
	{
		cout << "Failed to open file" << endl;
	}
}

/*Driver function*/
int main()
{
	string word;
	ifstream inFile;

	
	// change file name accordingly.
	openFile(inFile, "input_02.txt");

	Trie *root = nullptr;

	queue<pair<string, string>> buffer;
	vector<int> sufIndices;

	/*Scanning Input file word by word and forming trie and queue of it.
	Queue buffer contains pair of strings, the word itself with the suffix*/
	

		while (!inFile.eof())
	{
		getline(inFile, word);
		sufIndices = sufStIndex(word, root);
		for (auto x : sufIndices)
		{
			if (x >= word.length())
				break;
			buffer.push({word, word.substr(x)});
		}
		insert(root, word);
	}

	/*Processing queue 'buffer' by popping pair from it. 
	We check for the suffix is valid word or compound word, 
	if its compound word than again we check its prefixes */

	pair<string, string> rem_compnd; //pair to store the elements poped out from buffer(queue)
	int maxLength = 0; //longest compound word length
	string longest = ""; //longest compound word
	string sec_longest = ""; //secon longest compound word

	while (!buffer.empty())
	{
		rem_compnd.first = buffer.front().first;

		rem_compnd.second = buffer.front().second;

		buffer.pop();
		word = rem_compnd.second;

		sufIndices = sufStIndex(word, root);

		if (sufIndices.empty())
		{
			continue;
		}
		for (int i : sufIndices)
		{
			if (i > word.length())
			{
				break;
			}
			if (i == word.length())
			{
				if (rem_compnd.first.length() > maxLength)
				{
					sec_longest = longest;
					maxLength = (rem_compnd.first).length();
					longest = rem_compnd.first;
				}
			}
			else
			{
				buffer.push({rem_compnd.first, word.substr(i)});
			}
		}
	}
	cout << "Longest Compund word is " << longest << endl;
	cout << "Second Longest Compund word is " << sec_longest;

	inFile.close();
	return 0;
}

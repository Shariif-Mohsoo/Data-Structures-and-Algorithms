#include <iostream>
#include <vector>
using namespace std;

void checkIfPangram(string sentence)
{
    vector<bool> alpha(26, 0);
    for (int i = 0; i < sentence.size(); i++)
    {
        alpha[sentence[i] - 'a'] = 1;
    }
    for (int i = 0; i < alpha.size(); i++)
    {
        if (alpha[i] == 0)
        {
            cout << "Not pangram";
            return;
        }
    }
    cout << "Pangram" << endl;
}

int main()
{
    // check Pangram (thequickbrownfoxjumpsoverthelazydog)
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    checkIfPangram(sentence);
    return 0;
}
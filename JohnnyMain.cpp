#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>


char specials[] = {':', '/'};

using namespace std;

bool isSpecialCharacter(char c)
{
    for(char s : specials)
    {
        if(c == s)
            return true;
    }
    return false;
}


void helpEmployer()
{
    string path == "";
    cout << "What is the path of the resume: ";
    getline(cin, path);

    ifstream resume(path);

    string word;

    stringstream tokens;

    while(resume >> word)
    {
        int countSinceLastToken = 0;

        int i = 0;
        for(; i < word.length(); i++)
        {
            if(isSpecialCharacter(word[i]))
            {
                if(i > 0)
                {
                    tokens << word.substr(0, i) << endl;
                }
                countSinceLastToken = i;
                tokens << word[i] << endl;
                word = word.substr(i+1, word.length());
                i = 0;
            }
        }
        if(i > 0)
        {
            tokens << word.substr(0, i) << endl;
        }

    }


}

int main()
{
    cout << "Are you an applicant (1) or employer (2): " << endl;
    string who;
    getline(cin, who);
    if(who == "2")
    {
        helpEmployer();
    }
    return 0;
}

#include <iostream>
#include <fstream>




using namespace std;

void helpEmployer()
{

    cout << "Please give resume path: ";
    string path;
    getline(cin, path);

    ifstream resume(path);

    string line;
    while(resume >> line)
    {
        cout << line << endl;
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

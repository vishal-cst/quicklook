#include<iostream>
#include <regex>
using namespace std;
//typedef std::match_results<string> smatch;
int main()
{
  string str;
  while(true)
  {
    cin>>str;
    smatch m; //typedef std::match_results<string>
    regex e("([[:w:]]+)@([[:w:]]+)\\.com");
    bool found = regex_search(str,m,e);

    cout << "m.size()" << m.size() << endl;
    for(auto a: m) {
      cout<< a << endl;
    }
    cout << m.prefix().str() << endl;
    cout << m.suffix().str() << endl;
  }
}

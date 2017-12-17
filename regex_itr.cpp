#include<iostream>
#include <regex>
using namespace std;
//typedef std::match_results<string> smatch;
int main()
{
  string str;
    str = "vishal@gmail.com; pathak@yahhoo.com; kkraps@redifmail.com";
    regex e("([[:w:]]+)@([[:w:]]+)\\.com");

    //sregex_iterator pos(str.cbegin(), str.cend(), e);
    //sregex_token_iterator pos(str.cbegin(), str.cend(), e, 1);
    //sregex_iterator end;
    //sregex_token_iterator end;
    //for(;pos!=end; pos++) {
      //cout << pos->str() << endl;
      //cout << pos->str(1) << endl;
      //cout << pos->str(2) << endl;
	cout<< regex_replace(str, e, "$1 is on $2", regex_constants::format_no_copy | regex_constants::format_first_only);
      cout << endl;
    //}

    cout << "........................";
    cin >> str;
}

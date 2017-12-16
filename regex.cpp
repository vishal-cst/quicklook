#include <regex>
#include <iostream>
using namespace std;


int main() {
  string str;
  while(true) {
    std::cin >> str;
    regex e("abc", regex_constants::icase);
    bool match  = regex_match(str,e);
    std::cout<< (match?"Matched" : "Not Matched") << endl;
  }
}

#include <iostream>
#include <string>
#include <vector>

#include "absl/strings/str_join.h"

using namespace std;

int main(int argc, char* argv[]) {
  vector<string> v = {"foo", "bar", "baz"};
  string s = absl::StrJoin(v, "-");

  cout << "Joined string: " << s << "\n";

  return 0;
}

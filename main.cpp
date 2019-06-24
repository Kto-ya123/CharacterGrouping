#include <iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

template <typename RandomIt>
pair<RandomIt, RandomIt> FindStartsWith(
                RandomIt range_begin, RandomIt range_end,
                char prefix){

    string str = "1";
    str[0] = prefix;
    auto iterBeg = lower_bound(range_begin, range_end, str);
    str[0]++;
    auto iterEnd = upper_bound(iterBeg, range_end, str);

    return pair<RandomIt, RandomIt>(iterBeg, iterEnd);
}

/*template <typename RandomIt>
pair<RandomIt, RandomIt> FindStartsWith(
                RandomIt range_begin, RandomIt range_end,
                string prefix){

    auto iterBeg = lower_bound(range_begin, range_end, prefix);
    prefix[prefix.size() - 1]++;
    auto iterEnd = lower_bound(iterBeg, range_end, prefix);
    return pair<RandomIt, RandomIt>(iterBeg, iterEnd);
}*/


/*int main()
{
    const vector<string> sorted_strings = {"moscow", "motovilikha","motoa", "mprt" , "murmansk"};

  const auto mo_result =
      FindStartsWith(begin(sorted_strings), end(sorted_strings), "mo");
  for (auto it = mo_result.first; it != mo_result.second; ++it) {
    cout << *it << " ";
  }
  cout << endl;

  const auto mt_result =
      FindStartsWith(begin(sorted_strings), end(sorted_strings), "mt");
  cout << (mt_result.first - begin(sorted_strings)) << " " <<
      (mt_result.second - begin(sorted_strings)) << endl;

  const auto na_result =
      FindStartsWith(begin(sorted_strings), end(sorted_strings), "na");
  cout << (na_result.first - begin(sorted_strings)) << " " <<
      (na_result.second - begin(sorted_strings)) << endl;

    const auto za_result =
      FindStartsWith(begin(sorted_strings), end(sorted_strings), "za");
  cout << (za_result.first - begin(sorted_strings)) << " " <<
      (za_result.second - begin(sorted_strings)) << endl;

      const auto aa_result =
      FindStartsWith(begin(sorted_strings), end(sorted_strings), "aa");
  cout << (aa_result.first - begin(sorted_strings)) << " " <<
      (aa_result.second - begin(sorted_strings)) << endl;

  return 0;
}*/

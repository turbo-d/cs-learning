#ifndef SET_HPP
#define SET_HPP

#include <set>

class Set {
private:
  std::set<int> m_set;

public:
  Set(std::set<int>);

  void print();

  //bool empty();
  //int cardinality();
  //Set powerSet();
  //
  //Set openInterval(int, int);
  //Set closedInterval(int, int);
  //Set halfOpenInterval(int, int);
  //Set halfClosedInterval(int, int);

  //bool isEqualTo(Set);
  //bool isSubsetOf(Set);
  //bool isProperSubsetOf(Set);
  //bool isDisjointTo(Set);
  //
  //Set union(Set);
  //Set intersection(Set);
  //Set difference(Set);
  //Set cartesianProduct(Set);

  //Set complement(Set);

  //bool isElem(int);
};

#endif // SET_HPP

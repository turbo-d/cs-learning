#include "./Set.hpp"

#include <iostream>

using namespace std;

Set::Set(set<int> init) {
  m_set = init;
}

void Set::print() {
  cout << "{";
  for_each(m_set.cbegin(), set.cend(), [](int elem) {
    cout << elem << ",";
  });
  cout << "}" << "\n";
}

//bool Set::empty() {
//
//}
//
//int Set::cardinality() {
//
//}
//
//Set Set::powerSet() {
//
//}
//
//Set Set::openInterval(int a, int b) {
//
//}
//
//Set Set::closedInterval(int a, int b) {
//
//}
//
//Set Set::halfOpenInterval(int a, int b) {
//
//}
//
//Set Set::halfClosedInterval(int a, int b) {
//
//}
//
//bool Set::isEqualTo(Set B) {
//
//}
//
//bool Set::isSubsetOf(Set B) {
//
//}
//
//bool Set::isProperSubsetOf(Set B) {
//
//}
//
//bool Set::isDisjointTo(Set B) {
//
//}
//
//Set Set::union(Set B) {
//
//}
//
//Set Set::intersection(Set B) {
//
//}
//
//Set Set::difference(Set B) {
//
//}
//
//Set Set::cartesianProduct(Set B) {
//
//}
//
//Set Set::complement(Set U) {
//
//}
//
//bool Set::isElem(int a) {
//
//}


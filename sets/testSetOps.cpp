#include <iostream>
#include <set>
#include "./SetOps.hpp"

int main() {
  std::set<int> NULL_SET;
  print("NULL_SET", NULL_SET);
  std::cout << "Is null set?: " << empty(NULL_SET) << "\n";
  
  std::set<int> A {1, 2, 3, 4, 5};
  print("A", A);
  std::cout << "Cardinality: " << cardinality(A) << "\n";
  std::cout << "Is 2 in A?: " << isElem(2, A) << "\n";
  std::cout << "Is 7 in A?: " << isElem(7, A) << "\n";

  std::set<int> B {3, 4, 5, 6, 7};
  print("B", B);

  std::set<int> AUB = unionOp(A, B);
  print("AUB", AUB);

  std::set<int> ANB = intersection(A, B);
  print("ANB", ANB);

  std::set<int> A_B = difference(A, B);
  print("A_B", A_B);

  std::set<int> B_A = difference(B, A);
  print("B_A", B_A);

  std::set<int> U {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  print("U", U);
  std::set<int> A_bar = complement(A, U);
  print("A_bar", A_bar);
  
  std::set<int> C {6, 7, 8, 9, 10};
  print("C", C);

  std::cout << "A disjoint B?: " << disjoint(A, B) << "\n";
  std::cout << "A disjoint C?: " << disjoint(A, C) << "\n";
  
  std::cout << "A = A?: " << equal(A, A) << "\n";
  std::cout << "A = B?: " << equal(A, B) << "\n";
  
  std::cout << "A subset B?: " << isSubsetOf(A, B) << "\n";
  std::cout << "A subset U?: " << isSubsetOf(A, U) << "\n";
  std::cout << "A subset A?: " << isSubsetOf(A, A) << "\n";

  std::cout << "A proper subset U?: " << isProperSubsetOf(A, U) << "\n";
  std::cout << "A proper subset A?: " << isProperSubsetOf(A, A) << "\n";

  std::set<std::pair<int, int>> AXB = cartesianProduct(A, B);
  print("AXB", AXB);
  std::cout << "Cardinality: " << cardinality(AXB) << "\n";
}

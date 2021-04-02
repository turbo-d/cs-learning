#include <iostream>
#include <set>

void print(std::string name, std::set<int>& set) {
  std::cout << name << ": {";
  std::for_each(set.cbegin(), set.cend(), [] (int elem) {
    std::cout << elem << ",";
  });
  std::cout << "}" << "\n";
}

void print(std::string name, std::set<std::pair<int, int>>& set) {
  std::cout << name << ": {";
  std::for_each(set.cbegin(), set.cend(), [] (auto elem) {
    std::cout << "(" << elem.first << "," << elem.second << ")" << ", ";
  });
  std::cout << "}" << "\n";
}

bool empty(std::set<int>& set) {
  return set.empty();
}

int cardinality(std::set<int>& set) {
  return set.size();
}

int cardinality(std::set<std::pair<int, int>>& set) {
  return set.size();
}

bool isElem(int elem, std::set<int>& set) {
  return set.count(elem);
}

std::set<int> unionOp(std::set<int>& A, std::set<int>& B) {
  std::set<int> res(A);
  std::for_each(B.cbegin(), B.cend(), [&res] (int elem) {
    if (!res.count(elem)) res.insert(elem);
  });
  return res;
}

std::set<int> intersection(std::set<int>& A, std::set<int>& B) {
  std::set<int> res(A);
  for (auto it = res.begin(); it != res.end(); ) {
    if (!B.count(*it)) {
      it = res.erase(it);
    }
    else {
      ++it;
    }
  }
  return res;
}

std::set<int> difference(std::set<int>& A, std::set<int>& B) {
  std::set<int> res(A);
  for (auto it = res.begin(); it != res.end(); ) {
    if (B.count(*it)) {
      it = res.erase(it);
    }
    else {
      ++it;
    }
  }
  return res;
}

std::set<int> complement(std::set<int>& A, std::set<int>& U) {
  // Relative complement of A in the universal set U: U-A
  return difference(U, A);
}

bool disjoint(std::set<int>& A, std::set<int>& B) {
  for (auto elem : A) {
    if (B.count(elem)) return false;
  }
  return true;
}

bool equal(std::set<int>& A, std::set<int>& B) {
  if (cardinality(A) != cardinality(B)) return false;

  for (auto elem : A) {
    if (!B.count(elem)) return false;
  }

  return true;
}

bool isSubsetOf(std::set<int>& A, std::set<int>& B) {
  if (cardinality(A) > cardinality(B)) return false;

  for (auto elem : A) {
    if (!B.count(elem)) return false;
  }

  return true;
}

bool isProperSubsetOf(std::set<int>& A, std::set<int>& B) {
  if (cardinality(A) >= cardinality(B)) return false;

  for (auto elem : A) {
    if (!B.count(elem)) return false;
  }
  
  return true;
}

std::set<std::pair<int,int>> cartesianProduct(std::set<int>& A, std::set<int>& B) {
  std::set<std::pair<int, int>> res;
  for (auto a : A) {
    for (auto b : B) {
      res.insert(std::make_pair(a, b));
    }
  }
  return res;
}


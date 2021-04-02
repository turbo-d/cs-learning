Read about sets in "Mathematical Proofs" by Chartrand, Polimeni, & Zhang, and in "Mathematics for Computer Science" by Lehman, Leighton, & Meyer. Implemented some set operations to reinforce my learning.

Eventually I would also like to expand this into a more robust library with data types and constants. Use this as a refresher on C++ and OOP.
- Some sort of Set class with the set operations on it
- Templatize the set to allow for other data types
- Allow for sets as set elements
- Possibly allow for heterogeneous sets
- Add constants (of a certain bitwidth) for N, Z, R, 0, etc.
- Allow for operations like unions and intersections over a collection of sets
- Add support for indexed collections of sets
- Methods to check if a collection of sets is pairwise disjoint, or a partition of another set
- A method to (probably arbitrarily) partition a set.
- Power sets
- Varied ways of constructing sets (via other sets, arrays, initalizer lists, in terms of other sets (maybe just write some sort of parser for fun?))

Perhaps I'll go back and do some of the practice problems from the above books to test more of the library functionality.

I also wonder if there are any more math centric tools for representing and performing operations on sets. Maybe something in functional programming languages or in theorem provers? I don't really know what I don't know. If I discover something like that though it would be cool to come back here and do some of the practice problems with a tool like that.

NOTE: The Set.hpp and Set.cpp files are not completed or used right now.

# 📚 Data Structures and Algorithms in C++

Welcome to my curated repository of Data Structures and Algorithms implemented using C++. This repository is designed as a hands-on reference for learning, practicing, and mastering DSA concepts, organized by topic and technique.

---

## ✨ Features

- ✅ Clean and well-commented C++ implementations
- 🔍 Categorized by topic: Trees, Graphs, Recursion, Sorting, etc.
- 📂 Organized folders per technique (e.g., Greedy, DP, Backtracking)
- 🧪 Useful for interviews, competitive programming, and academic practice

---

## 📁 Folder Structure

- `array-adt/` - Array Abstract Data Type implementations
- `arrays-representations/` - Memory representations and tricks
- `asymptotic-notations/` - Big O, Ω, Θ analysis examples
- `avl-trees/` - Self-balancing binary search trees
- `backtracking/` - Classic backtracking problems like N-Queens, Sudoku
- `binary-search-trees/` - BST operations and variations
- `cmake/`, `build/` - Project build and configuration setup
- `divide-and-conquer/` - Merge Sort, Quick Sort, Binary Search
- `dsa-using-cpp/` - Miscellaneous or in-progress solutions
- `dynamic-programming/` - DP table and memoization problems
- `graphs/` - BFS, DFS, Dijkstra, Topological Sort
- `greedy-method/` - Huffman Coding, Activity Selection
- `hashing-techniques/` - Open addressing, chaining, custom hashing
- `heap/` - Min-heap, max-heap, priority queue
- `linkedlist/` - Singly, doubly, and circular linked lists
- `matrices/` - Matrix rotation, search, and traversal techniques
- `queues/` - Array-based, linked, circular queues
- `recursion/` - Core recursion problems
- `recursion-relations/` - Recurrence relation examples
- `search-trees/` - BST, AVL, Red-Black Tree variants
- `sorting-techniques/` - Bubble, Selection, Merge, Quick Sort, etc.
- `stack/` - Stack implementation and expression parsing
- `strings/` - Pattern matching, palindrome checks, manipulation
- `trees/` - Binary trees, traversal, diameter, etc.

---

## 🚀 Getting Started

### Prerequisites
- C++17 or above
- CMake (if using the build system)
- C++ compiler (Clang)
- vcpkg
- or just install flick cli
### Build and Run
```bash
cmake --preset default
cmake --build build/default
cd build/default
./<dsa>/<dsa>.exe
------------------or-----------------
flick build <subproject you want to build and run like array, stack or tree>

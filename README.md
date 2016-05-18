# dslib
The goal of `dslib` is to demonstrate how complex data structures (and related algorithms) can be developed by reusing simpler ones. In general, textbooks come with numerous unrelated examples each relevant to a specific DS. `dslib`, on the other hand, grows by consuming the earlier data structures.

`dslib` is an academic library. However, we'll be glad if someone finds any other application of it. If you find `dslib` useful, please consider donating via PayPal.
[![Donate Button](https://img.shields.io/badge/paypal-donate-orange.svg)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=RMLTQ76JSXJ4Q)

The core component is a circular doubly linked list. Library-internal data structures are dynamically (de)allocated.

`dslib` is **GPLv3** licensed. Copyright (C) 2015 [Arun Prakash Jana](mailto:engineerarun@gmail.com).

Most of the code conforms to the Linux kernel coding standards (verified against *checkpatch.pl*), other than a few unavoidable instances.

# Table of Contents
- [Building blocks](#building-blocks)
- [APIs](#apis)
- [Compilation](#compilation)
- [Testing](#testing)
- [Developers](#developers)
- [Contributions](#contributions)

# Building blocks
- **dlist:** Circular doubly linked list with a void pointer pointing to the data in each node. As you can guess, the library doesn't take care (de)allocating the actual memory used for the data. A node simply points to the data plus next and previous node pointers.
- **queue:** Builds on top of dlist. Each element is a dlist node pointing to the value inserted in the queue.
- **stack:** Builds on top of dlist. Each element is a dlist node pointing to the value pushed in the stack.
- **tree:** A binary search tree, stores integers.
- **AVL:** An AVL tree implementation, stores integers.
- **BFS:** Iterative Breadth-first search for tree and AVL implemented using the queue.
- **DFS:** Iterative Depth-first search for tree implemented using the stack.

There are test cases for each DS. Though not very organized, they provide an insight into the usage of `dslib`.

# APIs
A complete list of APIs can be found in [apilist.txt](https://github.com/jarun/dslib/blob/master/apilist.txt). Most of the APIs are iterative.
The following 2 APIs are recursive and the iterative implementations are left as an exercise:
- bool delete_tree_node(tree_pp head, int val);
- bool delete_avl_node(avl_pp head, int val);

# Compilation
The following compilation steps are tested on Ubuntu 14.04.4 x86_64:

    $ git clone https://github.com/jarun/dslib/
    $ cd dslib
    $ make

To install `dslib`, run:

    $ sudo make install

To remove `dslib` from your system, run:

    $ sudo make uninstall

Clean up (cleans test executables too):

    $ make clean

# Testing
Make sure `dslib` is installed. To compile test cases under `test` subdirectory:

    $ sudo make install
    $ make test

Only informative logs are enabled. For DEBUG logs, set:

    int current_log_level = DEBUG;

in the source test file.

# Developers
1. [Arun Prakash Jana](mailto:engineerarun@gmail.com)  
2. [Ananya Jana](mailto:ananya.jana@gmail.com)

# Contributions
Contributions are welcome! We would love to see more data structures and APIs added to `dslib`.

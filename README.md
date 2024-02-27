# Data_structures

Subject area: Security in the field of public service.

1. The linked lists block.
2. The stack block.
3. The queue block.
4. Hash block.
5. Recursion block.
6. The encapsulation block.
7. The inheritance block.
8. The polymorphism block.

## Contents

1. [Linked lists block](#linked-lists-block)\
    1.1 [Task 1. Linked lists block. Code](#task-1-linked-lists-block-code)\
    1.2 [Task 2. Linked lists block. Code](#task-2-linked-lists-block-code)\
    1.3 [Task 3. Linked lists block. Code](#task-3-linked-lists-block-code)\
    1.4 [Task 4. Linked lists block. Code](#task-4-linked-lists-block-code)\
    1.5 [Task 5. Linked lists block. Code](#task-5-linked-lists-block-code)
2. [Stack block](#stack-block)\
    2.1 [Task 1. Stack block](#task-1-stack-block)\
        2.1.1 [Task 1. Stack block. Information](#task-1-stack-block-information)\
        2.1.2 [Task 1. Stack block. Code](#task-1-stack-block-code)\
    2.2 [Task 2. Stack block. Code](#task-2-stack-block-code)
3. [Queue block](#queue-block)\
    3.1 [Queue block. Information](#queue-block-information)\
    3.2 [Queue block. Code](#queue-block-code)
4. [Hash block](#hash-block)\
    4.1 [Task 1. Hash block. Code](#task-1-hash-block-code)\
    4.2 [Task 2. Hash block. Code](#task-2-hash-block-code)\
    4.3 [Task 3. Hash block. Code](#task-3-hash-block-code)
5. [Recursion block](#queue-block)\
    5.1 [Recursion block. Information](#recursion-block-information)\
    5.2 [Recursion block. Code](#recursion-block-code)
6. [Encapsulation block](#encapsulation-block)\
    6.1 [Task 1. Encapsulation block. Code](#task-1-encapsulation-block-code)\
    6.2 [Task 2. Encapsulation block. Code](#task-2-encapsulation-block-code)\
    6.3 [Task 3. Encapsulation block. Code](#task-3-encapsulation-block-code)\
    6.4 [Task 4. Encapsulation block. Code](#task-4-encapsulation-block-code)
7. [Inheritance Block](#inheritance-block)\
    7.1 [Inheritance block. Information](#inheritance-block-information)\
    7.2 [Inheritance block. Code](#inheritance-block-code)
8. [Polymorphism block](#polymorphism-block)\
    8.1 [Polymorphism block. Information](#polymorphism-block-information)\
    8.2 [Polymorphism block. Code](#polymorphism-block-code)

# Linked lists block

1. Write a function that creates an empty linked list.
2. Write a function that adds a new node with a value to the beginning of the linked list.
3. Write a function that adds a new node with a value to the end of the linked list.
4. Write a test that checks for and removes the first node from the linked list.
5. Write a test that checks for and removes all nodes with the value value from the linked list.

## Task 1. Linked lists block. Code

The `Node` class:
- `element` is an instance variable of the `Node` class that contains the value stored in the node;
- `next` - pointer to the next node in the list;
- `Node()` - constructor of the `Node` class.

The `LinkedList` class:
- `head` - pointer to the first element (head) of the list;
- `printErrors` is a flag used to control the output of error messages;
- `LinkedList()` - constructor of the `LinkedList` class;
- `~LinkedList()` - destructor of the `LinkedList` class;
- `setPrintErrorsFalse()` - the function sets the `printErrors` flag to 0, disabling the output of error messages;
- `setPrintErrorsTrue()` - the function sets the `printErrors` flag to 1, including error messages;
- `getPrintErrors()` - the function returns the value of the `printErrors` flag;
- `createEmptyLinkedList()` - the function creates and returns an empty linked list;
- `add()` - the function adds a new node with the value data to the top of the list;
- `addToEnd()` - the function adds a new node with the value data to the end of the list;
- `remove()` - the function removes the first element from the list and writes its value to the element variable;
- `removeByValue()` - the function removes the first occurrence of value from the list;
- `search()` - the function searches for the index of the first occurrence of the element value in the list and returns it;
- `print()` - the function displays all the items in the list.

## Task 2. Linked lists block. Code

`add()` is a function for adding a new item to the beginning of the linked list. The function takes as an argument a reference to the constant string `data`, which will store the value of the new element that we want to add to the list:
- A new node `Node` is created, with memory allocated for it in the heap using the new operator. This node will store the `data` value passed to the function;
- Checks if the list is empty. If `head` is equal to nullptr, it means that the list is empty and the new node is assigned to `head`. This happens when the list is empty and this is the first item we add;
- If the list is not empty, a new node is added to the top of the list. The `next` pointer of the new node is set to the current `head` so that it points to the next element after the new node is added. The `head` is then updated to point to the new node, which now becomes the first in the list.

## Task 3. Linked lists block. Code

`addToEnd()` is a function designed to add a new item to the end of the linked list. The function takes as an argument a reference to the constant string `data`, which will store the value of the new element that we want to add to the list:
- A new node `Node` is created, with memory allocated for it in the heap using the new operator. This node will store the `data` value passed to the function;
- Checks if the list is empty. If `head` is equal to nullptr, it means that the list is empty and the new node is assigned to `head`. This happens when the list is empty and this is the first item we add;
- If the list is not empty, a new node is added to the end of the list. To do this, the list is traversed until the last node is found (i.e. the node with `next` equal to nullptr). When such a node is found, its `next` pointer is set to a new node, adding it to the end of the list.

## Task 4. Linked lists block. Code

`testRemoveFirstNode()` - the function is used to check for the presence and removal of the first node from the linked list. The function takes a pointer to an object of the `LinkedList` class as an argument and returns a string:
- Checks whether the `head` of the list is empty (equal to nullptr). If the `head` is not nullptr, it means that the list is not empty, and the operation of deleting the first node can be performed;
- If the list is not empty, save the value of the element stored in the first node of the list;
- Calling the `remove()` method of the `myList` object, which removes the first node from the list and returns the value of the deleted element via the `removedElement` parameter;
- The assert statement is used to verify that the value of the deleted element really matches the expected value that we saved earlier. If the values do not match, the program terminates with an error;
- If the deletion was successful and the list was not empty, the function returns a string with a message that the first element was deleted;
- If the list turns out to be empty, the function returns a string with a message stating that deletion is impossible because the list is empty.

## Task 5. Linked lists block. Code

`testRemoveValues()` - the function is used to check for the presence and removal of all nodes with the value value from the linked list. The function takes a pointer to an object of the `LinkedList` class and the value `value` as arguments and returns a string:
- Checks whether the `head` of the list is empty (equal to nullptr). If the `head` is not nullptr, it means that the list is not empty, and the operation of deleting nodes with the specified `value' can be performed;
- The `search()` method of the `myList` object is called, which searches for the index of the first node with the value `value` in the list. The index value is stored in `search_result`;
- Sets the `printErrors` flag to false for the `myList` object to temporarily disable error output;
- Then it is checked that the search result is not -1, which means that the node with the desired value has been found;
- If the node with the desired value was not found (that is, the search result is -1), the function returns a message that such a node was not found, and completes execution;
- The loop performs the operation of deleting nodes with the specified value `value` as long as they are present in the list. When all nodes with this value are deleted, the function returns a message that the desired elements have been deleted.
- If the list is empty, the function returns a message that the list is empty.

# Stack block

1. Implement reverse Polish notation.
2. Implement a bracket balance check: the stack can be used to check the balance of brackets in a row. When an opening bracket is detected, it is added to the stack, and when a closing bracket is detected, it is compared to the top of the stack. If the brackets are consistent, they are removed from the stack, otherwise an error is returned.

## Task 1. Stack block

Implement reverse Polish notation: the stack can be used to convert a mathematical expression from infix notation to postfix (reverse Polish) notation, and then to calculate the result.

## Task 1. Stack block. Information

Postfix (or reverse Polish) notation of an arithmetic expression is a way of writing expressions in which the operation sign is written not between operands, but after the operands. For example, the sum of the numbers 3 and 5 in the postfix entry is written like this: "3 5 +". What do more complex expressions mean, for example, what is "1 2 3 + + "in the postfix entry?
Here you need to perform the operation (2 3 +), its result will be the number 5, and then perform the operation "1 5 +", where 5 is the previously calculated expression. The same example can be written in another way: "1 2 + 3 + ", only the order of actions will be different — first "1 2 +" is calculated, and then the number 3 is added to the result.
A post-script entry is a sequence of actions for a stack calculator. The numbers are added to the stack, and the result of the operations is applied to the last two numbers on the stack, which are removed from the stack. Then the result is put on the stack.
That is, the expression "2 3 + 4 * " in a postfix entry, it can be calculated as follows:
- The number 2 is put on the stack;
- The number 3 is put on the stack;
- The numbers 3 and 2 are extracted from the stack, the addition operation is applied to them, the result (number 5) is put on the stack;
- The number 4 is put on the stack;
- The numbers 5 and 4 are removed from the stack, the result of their multiplication of 20 is put on the stack.
As a result, there is one number in the stack — 20, which is the result of calculating the expression.

## Task 1. Stack block. Code

`StackNode` class - the class represents a stack node:
- `data` - stores data of the char type;
- `next` - pointer to the next node in the stack;
- `StackNode()` - constructor of the `StackNode` class, takes a value of type char and initializes a node with this value and a `next` pointer pointing to nullptr.

`Stack` class - the class represents the stack:
- `printErrors` is a flag for controlling the output of error messages;
- `size` - stores the stack size;
- `head` - pointer to the top of the stack;
- `Stack()` - constructor of the `Stack` class, initializes an empty stack;
- `~Stack()` - destructor of the `Stack` class, frees up memory allocated for stack nodes;
- `setPrintErrorsFalse()` - sets the `printErrors` flag to 0;
- `setPrintErrorsTrue()` - sets the `printErrors` flag to 1;
- `getPrintErrors()` - returns the value of the `printErrors` flag;
- `push()` - adds a new element to the top of the stack. A new node is created with the passed value, which becomes the new top of the stack;
- `pop()` - removes and returns an element from the top of the stack. If the stack is empty, the char value representing the empty stack is returned. If the stack is not empty, the vertex is deleted and its value is returned.

`task1()` - the function performs a specific task related to processing arithmetic expressions:
- The infix arithmetic expression `infixExpression` is set;
- Infix expression is output;
- The infix expression is converted to a postfix expression using the `infixToPostfix()` function;
- The postfix expression is output;
- The value of the postfix expression is calculated using the `calculatePostfix()` function;
- The result of the calculation is displayed.

`precedence()` - the function returns the operator's priority:
- `op` - operator symbol;
- If `op` is equal to '+' or '-', 1 is returned;
- If `op` is equal to '*' or '/', 2 is returned;
- In all other cases, 0 is returned.

`infixToPostfix()` - the function converts an infix arithmetic expression to a postfix:
- `expression` - an infix arithmetic expression;
- An empty `postfix` string is created to store the postfix expression;
- A stack of `operators` is created to store operators;
- Goes through each character in the `expression`;
- If the character is a digit, it is added to the `postfix`;
- If the character is the opening parenthesis '(', it is placed on the stack `operators`;
- If the character is the closing parenthesis ')', the operators from the stack `operators` are extracted and added to the `postfix` until the opening parenthesis is encountered. The opening parenthesis is removed from the `operators` stack;
- If the symbol is an operator, operators from the `operators` stack whose priority is greater than or equal to the priority of the current operator are extracted and added to the `postfix`. The current operator is added to the `operators` stack;
- All remaining operators from the `operators` stack are added to the `postfix`;
- `postfix` is returned.

`calculatePostfix()` - the function calculates the value of a postfix arithmetic expression:
- `postfix` is a postfix arithmetic expression;
- The `operands` stack is created to store operands;
- Goes through each character in `postfix`;
- If the character is a digit, it is added to the `operands` stack;
- If the symbol is an operator, two operands are extracted from the `operands` stack. The corresponding operation is performed on the operands in accordance with the operator;
- The result of the operation is added to the `operands` stack;
- The result of the calculation is returned, which represents the top element of the stack `operands`.

## Task 2. Stack block. Code

`task2()` - the function performs a specific task related to checking the balance of parentheses in the sequence:
- The sequence `sequence` is set;
- This sequence is displayed;
- The `isBalanced()` function is called to check the balance of parentheses in the sequence;
- Depending on the result of the check, a message is displayed indicating whether the brackets are balanced or not.

`isBalanced()` - the function checks whether a given sequence of parentheses is balanced:
- `sequence` - a sequence of parentheses to check;
- An empty `brackets` stack is created to store the brackets;
- Goes through each `bracket` character in the `sequence`;
- If `bracket` is an opening bracket '(', '[' or '{', it is added to the `brackets` stack;
- If `bracket` is the closing bracket ')', ']' or '}', if the `brackets` stack is empty, then the brackets are not balanced, and the function returns 0. If the top element of the `brackets` stack matches the corresponding opening bracket, this pair of brackets is considered balanced, and it is removed from the `brackets` stack. Otherwise, the brackets are not balanced, and the function returns 0.
- If, after processing the entire sequence, the `brackets` stack remains empty, it means that all brackets have been balanced, and the function returns 1. Otherwise, 0 is returned.

# Queue block

Implement multi-thread coordination: A queue can be used to coordinate the work of multiple threads, where each thread adds tasks to the queue and other threads retrieve tasks and execute them. This allows you to efficiently distribute work between threads and avoid a race condition.

## Queue block. Information

A queue is a data structure that works on the FIFO (First In, First Out) principle, that is, elements are added to the end of the queue and extracted from the beginning.

A thread is a unit of execution within a process. Threads allow a program to perform multiple tasks in parallel.

Multithreading is an approach in programming in which an application uses multiple threads to perform tasks simultaneously.

Thread synchronization is a method of controlling access to shared resources from multiple threads to avoid race condition and other errors associated with parallel execution.

A mutex is a synchronization object that is used to protect a critical section of code from simultaneous access from multiple threads. Mutexes provide exclusive access to a resource: only one thread can capture a mutex at a given time.

RAII is a programming idiom in C++, according to which resource management is associated with the lifecycle of an object. Resources are released automatically when an object exits the scope by calling the object destructor.

## Queue block. Code

The `QueueNode` class represents a node in the queue:
- `data` - stores string type data;
- `next` - pointer to the next node in the queue;
- `QueueNode()` - constructor of the `QueueNode` class, takes a string type value and initializes a node with this value and a `next` pointer pointing to nullptr.

The `Queue` class represents a queue:
- `size` - stores the queue size;
- `printErrors` is a flag for controlling the output of error messages;
- `head` - pointer to the beginning of the queue;
- `tail` - pointer to the end of the queue;
- `Queue()` - constructor of the `Queue` class, initializes an empty queue;
- `~Queue()` - destructor of the `Queue` class, frees up memory allocated for queue nodes;
- `setPrintErrorsFalse()` - sets the `printErrors` flag to 0;
- `setPrintErrorsTrue()` - sets the `printErrors` flag to 1;
- `getPrintErrors()` - returns the value of the `printErrors` flag;
- `push()` - adds an item to the end of the queue;
- `pop()` - removes and returns an element from the beginning of the queue.

`FSS_tasks` is a global variable representing the queue of tasks to be executed. It is defined as an object of the `Queue` class. Tasks that need to be completed are added to it.

`queueMutex` is an object of the `mutex` class, which is used to synchronize access to the global queue `FSS_tasks`. It blocks access to the queue while performing critical operations such as adding and removing items.

`coutMutex` is an object of the `mutex` class, which is used to synchronize access to standard output. It blocks access to cout during message output to avoid interference from different streams.

`main()` is the main function of the program. In this function, tasks are added to the queue and multiple threads are started to process them:
- Adding tasks to the global `FSS_tasks` queue;
- Creating an array of threads to perform tasks;
- Starting threads, each of which calls the `processTasks` function;
- Waiting for all threads to complete execution.

`processTasks()` - the function processes tasks from the queue:
- A unique `lock` blocker is captured for the `queueMutex` object to prevent simultaneous access to the global task queue from multiple threads;
- Checks if the `FSS_tasks` queue is empty;
- If the queue is not empty, the task is retrieved from the queue using the `pop()` function;
- If the queue is empty, the cycle ends;
- Lock `coutMutex` to safely output a message about a completed task to the standard output of cout;
- Output to standard output a message stating that the task was completed by the current thread using `this_thread::get_id()`;
- It is important to note that both `queueMutex` and `coutMutex` locks they are released automatically when they exit their scope due to RAII (Resource Acquisition Is Initialization), which guarantees the safe use of mutexes.

# Hash block

1. Implement search acceleration: Hash tables can be used to efficiently search for items by key. They allow access to an element in constant time (O(1)), which makes them useful for implementing dictionaries, caches, and other data structures where fast data access is needed.
2. Implement duplicate elimination: Hash tables can be used to remove duplicates from a dataset. When adding items to the hash table, duplicates will be automatically ignored, since they will have the same hash code.
3. Implement caching: Hash tables can be used to implement caches where the results of previous calculations or queries are stored in memory for quick access. Keys can be query parameters or input data, and values can be the results of operations or calculations.

## Task 1. Hash block. Code

The `HashTableNode` class represents the node of the hash table:
- `key` is the key;
- `element` - the value associated with the key;
- `next` - a pointer to the next node in the chain;
- `HashTableNode()` is the constructor of the class, takes the key `k` and the value `val` and initializes the corresponding fields.

The `HashTable` class - represents a hash table:
- `capacity` - capacity (size) of the table;
- `size` - the current number of items in the table;
- `loadThreshold` - the threshold value of the load, which determines when to perform hashing;
- `table` - vector of pointers to nodes representing chains of elements;
- `printErrors` is a flag that controls the output of error messages;
- `HashTable()` - class constructor, accepts the initial capacity of `initialCapacity` and the default load factor of `loadFactor`.
- `~HashTable()` - destructor, frees up memory allocated for table nodes;
- `setPrintErrorsFalse()`, `setPrintErrorsTrue()`, `getPrintErrors()` - error message output control;
- `hash_calc()` is a method for calculating the hash for a given key;
- `set()` is a method for adding or updating a key-value pair in a table;
- `del()` is a method for removing a key-value pair from a table;
- `get()` is a method for getting a value for a given key from a table;
- `rehash()` is a method for rehashing a table when the load threshold is exceeded.

The `get()` method in the `HashTable` class is designed to extract the value associated with a given key from a hash table:
- The method starts by calculating the hash for a given key. This is done using the `hash_calc()` function. The calculated hash is used to determine the index in the table where the key-value pair is presumably located;
- After receiving the index, the method accesses the corresponding list (chain) stored in a table cell with this index;
- Then the search is performed for the element with the specified key in this chain. The method iterates through the nodes in the chain, starting from the first one, and compares the key of each node with the specified key;
- If a node with the specified key was found during the search, the method returns its value;
- Otherwise, if a node with the corresponding key was not found in the chain (or the chain is empty), the method returns an empty row, which means that there is no value for this key in the table;
- In an ideal situation, when the hash function distributes elements evenly across cells, the length of the chain remains constant and does not depend on the total number of elements in the table. Therefore, the chain search takes constant time, regardless of the size of the table. Thus, with a well-designed hash function and proper collision management, the complexity of the `get()` operation remains O(1), which makes it effective for searching for elements in a hash table.

## Task 2. Hash block. Code

`set()` is a method in the `HashTable` class, designed to add or update a key-value pair to a hash table:
- The method starts by calculating the hash for a given key using the `hash_calc()` function. This hash defines the index in the table where the element will be added or updated;
- After receiving the index, the method checks whether an element with the same key already exists in the chain according to this index;
- If an element with such a key already exists, it means that the value for this key is being updated. In this case, the method updates the value of the element to the new value `value` and completes its work. This prevents duplicates from appearing, since only one value is stored in the table for each key.;
- If an element with the specified key is missing in the chain, the method creates a new node (the `HashTableNode` object) with the specified key and the value `value`;
- Then this new node is added to the end of the chain in the corresponding table cell;
- If the chain for this index was empty, the new node will simply become its first element;
- If the chain was not empty, a new node is added to the end of the existing chain;
- After adding a new element, the method checks whether the current load of the table does not exceed the threshold value of `loadThreshold`;
- If the load is exceeded, the `rehash()` method is called, which increases the capacity of the table and hashes all the elements to distribute them more evenly;
- Thus, by checking existing elements and preventing the addition of duplicates, the `set()` method ensures that only one value is stored in the hash table for each key.

## Task 3. Hash block. Code

The `Cache` class is a simple implementation of a cache that uses a hash table to store and manage cached values.:
- `hashTable` is an object of the `HashTable` type, which is used to store keys and values in the cache. It is encapsulated in the `Cache` class and used to manage cached data.;
- `Cache()` is the constructor of the `Cache` class, accepts the optional parameter `capacity`, which defines the initial capacity of the hash table. If the parameter is omitted, the default capacity is set to 100. The constructor creates a `HashTable` object with the specified capacity, which is initialized and stored in the private `hashTable` field;
- `addToCache()` is a method that adds a new value to the cache using the specified key. The `set()` method is called inside the method a `hashTable` object that adds a new key-value pair to the hash table or updates the value if the key already exists;
- `getFromCache()` is a method that returns a value from the cache using the specified key. Inside the method, the `get()` method of the `hashTable` object is called, which extracts the value from the hash table using the specified key and returns it;
- `removeFromCache()` is a method that removes a value from the cache by a given key. The `del()` method is called inside the method a `hashTable` object that removes a key-value pair from the hash table by the specified key.

# Recursion block

Implement the combinatorics problem according to the subject area: recursion can be used to solve combinatorics problems, such as generating all possible permutations, combinations, or placements of elements. A recursive function can call itself to generate all combinations with decreasing task size at each iteration. Watch the principle of "Divide and conquer".

## Recursion block. Information

Recursion is the process by which a function calls itself inside its body. It is widely used to solve problems that can be broken down into simpler subtasks. In this code, the `generateCombinations()` function uses recursion to generate all possible combinations from a given set of strings.

## Recursion block. Code

`generateCombinations()` - the function is used to generate all possible combinations from a given set of strings:
- `&FSB` - a reference to a vector of strings representing a set of agencies(FSB);
- `k` - an integer value representing the size of the combination;
- `&combination` - a reference to the vector of strings representing the current combination;
- `start` is an integer value indicating the initial index for generating the combination;
- Recursively generates all combinations starting from the current `start` index;
- For each index `i` from `start` to the end of the vector `FSB`, adds the corresponding agency to the current combination, calls itself recursively to generate the remaining elements of the combination, and then removes the added element to create a new combination;
- If the size of the current combination becomes equal to `k`, outputs this combination to standard output;
- When the end of the `FSB` vector is reached or the size of the combination reaches `k`, the function completes the current recursion step and returns to the previous call.

`main()`:
- In the main function, a string vector `FSB` is created, which represents a set of FSB agencies;
- The variable `n` is set, which indicates the size of the combination;
- An empty `combination` vector is created, which will be used to store the current combination;
- Then the `generateCombinations()` function is called with the parameters `FSB`, `n`, `combination` and 0 to start generating all combinations of FSB agencies of a given size;
- After completing the generation of combinations, the program completes its execution, returning 0.

# Encapsulation block

1. Creating an Account class template: encapsulation allows you to hide implementation details and provide public methods for interacting with the Account object, such as depositing, debiting and receiving balance.
2. Implementation of the Object class template: encapsulation allows you to hide the internal structure and state of an object by providing public methods for accessing object information (at least 5).
3. Creating the User class: encapsulation allows you to hide user data such as username, password and other confidential information by providing public methods to authenticate, change the password and work with the profile.
4. Implementation of the "File Manager" class: encapsulation allows you to hide the internal details of working with files and folders, providing public methods for operations such as creating, deleting, renaming files and folders, as well as reading and writing data to files.

# Task 1. Encapsulation block. Code

- `task1()`:
- Creates an object of the `Account<float>` class representing an account with financial transactions;
- Replenishes the account, displays information about the balance, performs debiting and displays information about the account balance again.

The `Account` class - represents an account with the balance attribute:
- `deposit()` is the method for adding funds to the account for the specified amount. It accepts the `amount` parameter, which represents the amount to top up. The method increases the account balance by the specified amount and displays a message about successful replenishment;
- `withdraw()` is a method for debiting funds from an account. It accepts the `amount` parameter, which represents the amount to be debited. The method checks whether there are enough funds in the account to debit the specified amount, and if successful, reduces the account balance. In case of insufficient funds, an error message is displayed;
- `get_balance()` is a method for getting the current account balance. It returns the current balance value;
- `account_balance()` is a method for displaying the current account balance on the screen. It uses the `get_balance()` method to get the current balance and outputs it to the standard output.

# Task 2. Encapsulation block. Code

`task2()`:
- Creates objects of various types using the `Object` class;
- Performs operations on object data and outputs information about them.

The `Object` class represents an object with data and name attributes:
- `getData()` is a method for getting object data. It returns the current data of the object;
- `setData()` is a method for setting new object data. It takes the `new_data` parameter, which represents new data, and sets it to an object;
- `getName()` is a method for getting the name of an object. It returns the current name of the object;
- `setName()` is a method for setting a new object name. It takes the `new_name` parameter, which is the new name of the object, and sets it;
- `printInfo()` is a method for displaying information about an object. It outputs the name and data of the object to standard output;
- `equals()` is a method for checking the equality of object data with other data. It takes the `other_data` parameter, with which the object data is compared, and returns true if they are equal, and false otherwise;
- `incrementData()` is a method for increasing object data by a specified amount. It accepts the `amount` parameter, by which the object's data is increased.
- `decrementData()` is a method for reducing object data by a specified amount. It takes the `amount` parameter, by which the object's data is reduced;
- `resetData()` is a method for resetting object data. It sets the object data to its original state.

## Task 3. Encapsulation block. Code

`task3()`:
- Creates an object of the `User` class representing the user;
- Performs user authentication, password change, and access level verification.

The `User` class represents a user with the attributes of a name, password, and access level:
- `authenticate()` is a method for authenticating the user. It accepts the username `uname` and password `pass` and returns true if they match the username and password of the user object, and false otherwise;
- `ChangePassword()` is a method for changing the user's password. It accepts the old password `oldPass` and the new password `newPass` and changes the user's password to a new one if the old password matches the current user password;
- `GetUserName()` is a method for getting the user name. It returns the username;
- `hasClearance()` is a method for verifying user access. It takes the access level required to access sensitive information and returns true if the user has the required access level, and false otherwise.;
- `userProfile()` is a method for displaying the user profile. It outputs the user's name and access level to standard output.

# Task 4. Encapsulation block. Code

`task4()`:
- Creates an object of the `FileManager` class that performs operations with files: create, write, read, rename and delete.

The `FileManager` class provides methods for working with files, such as creating, deleting, renaming, writing and reading:
- `CreateFile()` - method for creating a file with the specified name;
- `DeleteFile()` - method for deleting a file with the specified name;
- `renameFile()` - method for renaming a file with the specified name;
- `writeToFile()` is a method for writing data to a file with the specified name. Returns true if the recording was successful, and false otherwise;
- `readFromFile()` is a method for reading data from a file with the specified name. Returns the contents of the file as a string.

# Inheritance Block

Design the class and its subclasses according to the subject area: inheritance allows you to create a base class from which you can create subclasses. Each subclass can have its own specific methods and properties, as well as inherit common methods and properties from the base class.

## Inheritance block. Information

Inheritance allows you to create a new class based on an existing (base) class. A subclass (derived class) inherits the attributes and methods of the base class. The code uses inheritance to create specialized employee classes based on the `Employee` base class.

Virtual functions provide dynamic binding of method calls during program execution, which allows the use of polymorphism. In the code in the base class `Employee`, a virtual destructor is declared to properly free up memory when deleting objects through a pointer to the base class.

## Inheritance block. Code

The `Employee` class is a base class that represents common attributes and methods for all types of employees:
- `name` - the employee's name;
- `EmployeeID` - employee ID;
- `Employee()` is a class constructor that initializes the employee's name and ID;
- `~Employee()` is a virtual class destructor.

The `Federal_Security_Servicee` class is a subclass from `Employee` that represents employees of the Federal Security Service:
- `securityLevel` - employee's access level;
- `Federal_Security_Servicee()` is a class constructor that initializes the employee's name, ID, and security level;
- `DoWork()` - displays information about the activities of an FSB officer;
- `setSecurityLevel()` - sets the employee's access level;
- `getSecurityLevel()` - returns the current access level of the employee.

The class `The_Office_of_the_National_AntiTerrorism_Committee` is a subclass from `Employee` representing the staff of the National Antiterrorist Committee:
- `numberOfNACPersonnel` - the number of staff in the staff;
- `The_Office_of_the_National_AntiTerrorism_Committee()` - class constructor initializing the employee's name and ID;
- `DoWork()` - displays information about the employee's activities.;
- `getNumberOfPersonnel()` - returns the number of personnel in the NAC unit.

The `Service_for_the_Protection_of_the_Constitutional_Order_and_the_Fight_against_Terrorism` class is a subclass from `Employee` representing employees of the Service for the Protection of the Constitutional Order and the Fight against Terrorism:
- `director` - head of the service;
- `Service_for_the_Protection_of_the_Constitutional_Order_and_the_Fight_against_Terrorism()` - class constructor initializing the employee's name and ID;
- `DoWork()` - displays information about the activities of the NWKSiBT employee;
- `printDirector()` - displays information about the head of the service.

`main()` is the main function of the program:
- creation of objects of various classes;
- calling a common method for employees;
- calling specific methods for employees.

# Polymorphism block

Develop a mechanism that allows you to apply common methods to different classes of objects according to the subject area.

## Polymorphism block. Information

Polymorphism allows objects of different classes to respond to the same messages or method calls in different contexts. Virtual functions and member functions allow the use of polymorphism in C++. In this case, methods declared as virtual in the base class can be overridden in derived classes.

Virtual functions in C++ are used to achieve polymorphism. When a function is declared as virtual in a base class, derived classes can override that function by providing their own implementation. This allows objects of derived classes to use their own version of the function when called via a pointer or reference to the base class.

## Polymorphism block. Code

`Employee` class - the class represents the base employee:
- `name` - the employee's name;
- `EmployeeID` - employee identification number;
- `Employee()` is the constructor of the class that initializes the employee's name and identification number;
- `DoWork()` is a virtual function representing the employee's work. In this case, it displays information that the employee is performing work duties.

The `Federal_Security_Servicee` class is a subclass representing an employee of the Federal Security Service:
- `securityLevel` - access level;
- `DoWork()` is an overridden method that outputs information about the protection of an intelligence program.

The class `The_Office_of_the_National_AntiTerrorism_Committee` is a subclass representing an employee of the staff of the National Antiterrorist Committee:
- `DoWork()` is an overridden method that outputs information about counter-terrorism measures.

The `Service_for_the_Protection_of_the_Constitutional_Order_and_the_Fight_against_Terrorism` class is a subclass representing an employee of the Service for the Protection of the Constitutional Order and the Fight against Terrorism:
- `DoWork()` is an overridden method that outputs information about measures to prevent threats and protect the constitutional order.

`PerformWork()` is a common function for performing work with an employee:
- `emp` - reference to the employee's object;
- Calls the virtual function `DoWork()` for the passed employee object. Due to the polymorphism mechanism, the appropriate version of the method will be called depending on the type of employee object.

`main()` is the main function of the program:
- Creates objects of various subclasses of employees;
- Calls the `PerformWork()` function for each employee object.

>
> fratellou, 2024
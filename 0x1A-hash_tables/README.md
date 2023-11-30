# Hash Table Implementation in C

## Overview

This repository provides a simple implementation of a hash table in the C programming language. Hash tables are data structures that allow for efficient data retrieval based on a key. This implementation includes basic functionality for inserting, retrieving, and deleting key-value pairs.

## How to Use

### Compilation

To compile the code, use a C compiler such as GCC:

```bash
gcc hash_table.c -o hash_table
```

### Usage

After compilation, you can run the executable:

```bash
./hash_table
```

This will execute a simple program demonstrating the usage of the hash table.

### Functions

1. **`hash_table_init`**

   - Initializes a new hash table.

   ```c
   struct HashTable *hash_table_init(int size);
   ```

2. **`hash_table_insert`**

   - Inserts a key-value pair into the hash table.

   ```c
   void hash_table_insert(struct HashTable *table, const char *key, int value);
   ```

3. **`hash_table_get`**

   - Retrieves the value associated with a given key.

   ```c
   int hash_table_get(struct HashTable *table, const char *key);
   ```

4. **`hash_table_remove`**

   - Removes a key-value pair from the hash table.

   ```c
   void hash_table_remove(struct HashTable *table, const char *key);
   ```

5. **`hash_table_destroy`**

   - Frees the memory allocated for the hash table.

   ```c
   void hash_table_destroy(struct HashTable *table);
   ```

## Example

```c
#include <stdio.h>
#include "hash_table.h"

int main() {
    // Initialize a hash table with a size of 10
    struct HashTable *table = hash_table_init(10);

    // Insert key-value pairs
    hash_table_insert(table, "one", 1);
    hash_table_insert(table, "two", 2);
    hash_table_insert(table, "three", 3);

    // Retrieve values
    printf("Value for key 'one': %d\n", hash_table_get(table, "one"));
    printf("Value for key 'two': %d\n", hash_table_get(table, "two"));
    printf("Value for key 'three': %d\n", hash_table_get(table, "three"));

    // Remove a key-value pair
    hash_table_remove(table, "two");

    // Try to retrieve the value for the removed key
    int value = hash_table_get(table, "two");
    if (value == -1) {
        printf("Key 'two' not found.\n");
    }

    // Destroy the hash table and free memory
    hash_table_destroy(table);

    return 0;
}
```

## Contributing

Feel free to contribute to the improvement of this hash table implementation. You can open issues for bug reports or suggest enhancements. Pull requests are also welcome!

## License

This hash table implementation is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

#include <iostream>

/*
  This function prints "1 + 1 + ... + 1" with just enough "1" to add up to the
  value n passed in. This is a recursive practice, so we will have the function
  call itself with smaller values of n. This function expects numbers n >= 0.
  We will not do error checks, however we will treat all numbers n < 1 as 0 and
  thus would not print anything.
 */
void print_sum(int n) {
    // Here we want to have a base case to prevent infinite recursion.
    // One of our base cases would be 1
    if (n == 1) {
        std::cout << "1\n";
        return;
    }
    // The second base case is when n is less than 1
    // We don't print anything if n < 1, because you cannot add
    // 1 to get less than 1.
    if (n < 1) {
        return;
    }
    // Now we start the actual recursion
    // First we process This n, then we process the inner n.
    std::cout << "1 + ";
    // this is the recursive call. 
    print_sum(n - 1);
}

int main() {
    // First lets run the two base cases:
    print_sum(0); // No output.
    print_sum(1); // prints: 1
    // In the base cases you can see that the print_sum was not called
    // within itself. These are thus not recursive.
    // Now we can look at some more interesting cases (the recursive ones)
    // In the following cases, each one cass the function itself more than once
    print_sum(2); // prints: 1 + 1
    print_sum(3); // prints: 1 + 1 + 1
    print_sum(4); // prints: 1 + 1 + 1 + 1
    print_sum(5); // prints: 1 + 1 + 1 + 1 + 1
    // Here you can see the recursive nature, in order to print 5
    // we print 1 + and then 4 which is 1 + and 3
    // etc.
}

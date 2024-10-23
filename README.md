# Pattern-finder-in-c
This is a pattern finder that search for words like singletons, arithmetics, palindroms, bipartites, etc
I. Singleton: A singleton string is made of only one letter. Examples: mmmmm, qqqqqqq,
rr, s, yyy
II. Arithmetic: A string made of subsequent alphabetical letters that appear in the alphabetical order. Examples: bcdef, pqrstuvwx, jk, y
III. Reverse Arithmetic: A string made of subsequent alphabetical letters that appear
in the reverse alphabetical order. Example: fedcb, xwvutsrqp, kj, y
IV. Balanced Tripartite: A string made of three identical parts. Example: busbusbus,
laptoplaptoplaptop, zzz
V. Balanced Bipartite: A string made of two identical halves. Examples: ticktick,
hophop, tantan, nocknock, nn
VI. Palindrome: A palindrome reads the same backward as forward. Examples: abcba,
bob, g
Please note that the above list is ranked in the decreasing order of their rarity. You
program prints out the list of all patterns (that can be found for each input string) followed
by a new line. Then, it asks for another line from input stream in a repetitive fashion. If no
pattern is found for an input string, the program prints a new line only.
For example, consider the following string received from the input stream:
bbbbbb\n
This string is a singleton, balanced tripartite, balanced bipartite, and a palindrome. Therefore, the program must print the following:
singleton\nbalanced tripartite\nbalanced bipartite\npalindrome\n\n

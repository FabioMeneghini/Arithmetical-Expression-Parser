# Logical-Expression-Parser
Logical expression parser with recursive descent parsing algorithm.

The language this program can parse is described by the following grammar:

`S ->  E
E ->  T -> E  |  T
T ->  V & E  |  V v E  |  V x E  |  V
V ->  0  |  1  |  (E)  |  !E`

Where S is the first rule to apply, and '->', '&', 'v', 'x', '!' are the symbols for implication, conjunction, disjunction, exclusive or and negation, respectively.

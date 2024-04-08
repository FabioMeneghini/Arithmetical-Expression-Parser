# Logical Expression Parser
Logical expression parser with ___recursive descent parsing___ algorithm.

The language this program can parse is described by the following grammar:

`S ->  E`

`E ->  T -> E  |  T`

`T ->  V & E  |  V v E  |  V x E  |  V`

`V ->  0  |  1  |  (E)  |  !V`

Where S is the first rule to apply, and `->`, `&`, `v`, `x`, `!` are the symbols for implication, conjunction, disjunction, exclusive or and negation, respectively.

___Next updates will include:___
- ___graphical user interface,___
- ___support for textual logical operators (e.g. "and" instead of "&"),___
- ___and more...___

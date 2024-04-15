# Logical Expression Parser
Logical expression parser implementation with ___recursive descent parsing___ algorithm.

The language this program can parse is described by the following grammar:

`S ->  E`

`E ->  T -> E  |  T`

`T ->  V & T  |  V v T  |  V x T  |  V`

`V ->  0  |  1  |  (E)  |  !V`

Where S is the first rule to apply, and `->`, `&`, `v`, `x`, `!` are the symbols for implication, conjunction, disjunction, exclusive disjunction and negation, respectively.

___This project is not finished yet: next updates will include:___
- ___graphical user interface,___
- ___support for textual logical operators (e.g. "and" instead of "&"),___
- ___and more...___

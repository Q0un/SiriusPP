# Natural Algorithms

## Running
Run cmake-build-release/SiriusPP with input and output files in arguments.
#### Example:
`/home/qqun/SiriusPP/cmake-build-release/SiriusPP ./interface/input.txt ./interface/output.txt`

## Input format
Write number of commands in natural algorithm, commands and the starting word. \eps means empty word, dot after arrow means that command is final.
#### Examples:
##### Input:
3  
ab -> c  
cd -> x  
x -> \eps  
abd
##### Output:
\eps

##### Input:
2  
b ->. c  
a -> b  
aa
##### Output:
ca

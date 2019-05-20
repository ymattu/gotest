package main

import "C"

//export DoubleIt
func DoubleIt(x int) int {
        return x*2 ;
}

//export fib
func fib(n int) int {
    if n <= 1 {
        return n
    }
    return fib(n-1) + fib(n-2)
}

//export fib_fast
func fib_fast(i int) int {
    a := 1
    b := 1
    j := 2
    for ; j < i; j += 2 {
        a += b
        b += a
    }
    if i%2 == 0 {
        return b
    }
    return a
}

func main() {}

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


func main() {}

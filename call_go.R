# https://purrple.cat/blog/2017/05/14/calling-go-from-r/

dyn.load("rgo.so")
.Call("godouble", 21L)

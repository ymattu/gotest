
# Test for calling Go from R

## Compile and build

    $ go build -o libcalc.so -buildmode=c-shared ./calc
    $ R CMD SHLIB -L. -lcalc rgo.c

## Usage

``` r
# Load shared object
dyn.load("rgo.so")

# Call a function via C
.Call("godouble", 21L)
```

    ## [1] 42

``` r
.Call("gofib", 40L)
```

    ## [1] 102334155

## References

<https://purrple.cat/blog/2017/05/14/calling-go-from-r/>

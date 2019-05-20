#include <R.h>
#include <Rinternals.h>

extern int DoubleIt() ;
extern int fib() ;

SEXP godouble(SEXP x){
  return Rf_ScalarInteger( DoubleIt( INTEGER(x)[0] ) ) ;
}

SEXP gofib(SEXP x){
  return Rf_ScalarInteger( fib( INTEGER(x)[0] ) ) ;
}

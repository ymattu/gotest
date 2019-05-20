#include <R.h>
#include <Rinternals.h>

extern int DoubleIt() ;
extern int fib() ;
extern int fib_fast() ;

SEXP godouble(SEXP x){
  return Rf_ScalarInteger( DoubleIt( INTEGER(x)[0] ) ) ;
}

SEXP gofib(SEXP x){
  return Rf_ScalarInteger( fib( INTEGER(x)[0] ) ) ;
}

SEXP gofib_fast(SEXP x){
  return Rf_ScalarInteger( fib_fast( INTEGER(x)[0] ) ) ;
}

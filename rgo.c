#include <R.h>
#include <Rinternals.h>

extern int DoubleIt() ;

SEXP godouble(SEXP x){
  return Rf_ScalarInteger( DoubleIt( INTEGER(x)[0] ) ) ;
}

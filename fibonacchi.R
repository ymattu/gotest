####
# very slow
fibr <- function(n)　{
  if (n == 1) {
    M <- 1
  } else if (n == 2) {
    M <- 2
  } else {
    M = Recall(n-1) + Recall(n-2)
  }
  return(M)
}

fibr_fast <- function(n){
  if (n == 0) { return(0) }
  x <- numeric(max(n,2))
  x[1] <- x[2] <- 1
  m <- 3
  while (m <= n){
    x[m] <- x[m-1] + x[m-2]
    m <- m + 1
  }
  x[n]
}

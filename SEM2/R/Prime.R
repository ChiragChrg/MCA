checkPrime = function(num) {
  isPrime = TRUE

  for (i in 2:num) {
    if (i == num) {
      next
    }

    if (num %% i == 0) {
      isPrime = FALSE
    }
  }

  return(isPrime)
}

num = as.integer(readline("Enter the Number :"))

if (checkPrime(num)) {
  cat(num, "is a Prime number")
} else {
  cat(num, "is Not a Prime number")
}

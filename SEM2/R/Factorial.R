getFactorial = function(n){
  factorial = 1
  
  for(i in 1:n){
    factorial = factorial * i
  }
  
  return(factorial)
}

n = as.integer(readline("Enter the number : "))

cat("Factorial of", n, ":", getFactorial(n))
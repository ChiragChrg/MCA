getFibonacci = function(n){
  fibonacci = c(0,1)
  
  n1 = 0
  n2 = 1
  
  for (i in 2:n){
    temp = n1 + n2
    n1 = n2
    n2 = temp
    
    fibonacci[i] = temp
  }
  
  return (fibonacci)
}

n = as.integer(readline("Enter the Fibonacci range : "))

cat("Fibonacci Series :", getFibonacci(n))
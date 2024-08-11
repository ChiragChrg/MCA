add = function(a,b){ 
  return(a + b)
}

sub = function(a,b){ 
  return(a - b)
}

mul = function(a,b){ 
  return(a * b)
}

div = function(a,b){ 
  if (b == 0) {
    return("Error: Division by zero")
  } else {
    return(a / b)
  }
}

while (TRUE) {
  cat("\n|--- Arithmetic Calculator ---|")
  cat("\n1. Addition")
  cat("\n2. Subtraction")
  cat("\n3. Multiplication")
  cat("\n4. Division")
  cat("\n5. Exit")

  choice = as.integer(readline("Enter your Choice : "))
  if (choice >= 5) {
    cat("Exit!\n")
    break
  }

  num1 = as.integer(readline("Enter 1st No. : "))
  num2 = as.integer(readline("Enter 2nd No. : "))

  result = switch(choice,
    result = add(num1, num2),
    result = sub(num1, num2),
    result = mul(num1, num2),
    result = div(num1, num2),
  )

  cat("Result: ", result, "\n")
}
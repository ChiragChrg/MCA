# R program to find Linear regression

x <- c()
y <- c()

N <- as.double(readline("Enter the range :"))

for (i in 1:N){
  x[i] <- as.double(readline("Enter the value for X :"))
}
for (i in 1:N){
  y[i] <- as.double(readline("Enter the value for Y :"))
}

avgX <- mean(x)
avgY <- mean(y)

# Applying formula for B
numerator <- 0
denominator <- 0

for (i in 1:N){
  numerator <- numerator + ((x[i] - avgX) * (y[i] - avgY))
  denominator <- denominator + ((x[i] - avgX) * (x[i] - avgX))
}

B <- numerator / denominator

# Applying formula for A
A <- avgY - (B * avgX)

cat("\n Linear Regression : ")
cat("\n Y = ", A ,"+", B ,"X")
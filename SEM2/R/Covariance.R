# R program to find Covariance

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

# Applying Covariance formula
sum <- 0

for (i in 1:N){
  sum <- sum + ((x[i] - avgX) * (y[i] - avgY))
}

covariance <- sum / N

cat("\n Covariance : ", covariance)
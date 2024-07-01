# R program to calculate Euclidean and Manhattan distance

x <- c()
y <- c()

N <- as.double(readline("Enter the range :"))

for (i in 1:N){
  x[i] <- as.double(readline("Enter the value for X :"))
}
for (i in 1:N){
  y[i] <- as.double(readline("Enter the value for Y :"))
}

# Applying Euclidean formula
euclidean <- 0
for (i in 1:N){
  xySquare <- (x[i] - y[i]) * (x[i] - y[i])
  euclidean <- euclidean + xySquare
}
euclidean <- sqrt(euclidean)

# Applying Manhattan formula
manhattan <- 0
for (i in 1:N){
  manhattan <- manhattan + (x[i] - y[i])
}
manhattan <- abs(manhattan)

cat("\n Euclidean : ", euclidean)
cat("\n Manhattan : ", manhattan)
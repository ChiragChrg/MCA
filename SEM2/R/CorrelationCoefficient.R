# R program to find Correlation Coefficient

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

# Calculating Standard deviations of X & Y
xSD <- 0
ySD <- 0

for (i in 1:N){
  xSD <- xSD + ((x[i] - avgX) * (x[i] - avgX))
  ySD <- ySD + ((y[i] - avgY) * (y[i] - avgY))
}

xSD <- sqrt((1/N) * xSD)
ySD <- sqrt((1/N) * ySD)

# Applying Correlation Coefficient formula
numerator <- 0
denominator <- 0

for (i in 1:N){
  numerator <- numerator + (x[i] * y[i])
}

numerator <- numerator - (N * avgX * avgY)
denominator <- N * xSD * ySD

correlation <- numerator / denominator

cat("\n Correlation Coefficent : ", correlation)
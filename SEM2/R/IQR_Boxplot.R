age = c()
n = as.integer(readline('Enter the Range :'))

for(i in 1:n){
  cat("Enter age", i, ": ")
  age[i] = as.integer(readline())
}

min = age[1]
max = age[n]

# First Quartile Q1
index_q1 = ceiling(n/4)
q1 = age[index_q1]

# Median Q2
index_q2 = ceiling(n/2)
median = age[index_q2]

# Third Quartile Q3
index_q3 = ceiling((3*n) /4)
q3 = age[index_q3]

# IQR
iqr = q3 - q1

cat("\n\n Minimum:", min)
cat("\n Maximum:", max)
cat("\n Q1:", q1)
cat("\n Median:", median)
cat("\n Q3:", q3)
cat("\n IQR:", iqr)

# Boxplot
boxplot(age, main="Boxplot of Age", ylab="Age", ylim=c(min - 5, max + 5))

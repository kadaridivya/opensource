from math import factorial

def ways_to_sit_together(X):
    return X*factorial(X - 1) 

X = int(input())
print(ways_to_sit_together(X))

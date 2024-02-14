import numpy as np
from scipy.optimize import minimize

# Set the stopping condition
tol = 1e-3

# Initial condition
x0 = np.array([1, 1])  # -----> STEP 1.



# Define the objective function
# fx = x1-x2+2*x1^2+2*x1*x2+x2^2.
def objective_function(x):
    return x[0] - x[1] + 2 * x[0]**2 + 2 * x[0] * x[1] + x[1]**2   # Given function

H = np.array([[4, 2], [2, 2]])  # ----> STEP 1 (Hessian matrix).

# Define the gradient of the objective function
def gradient(x):
    dfdx1 = 1 + 4 * x[0] + 2 * x[1]  # -----> STEP 1.
    dfdx2 = -1 + 2 * x[0] + 2 * x[1]  # -----> STEP 1.
    return np.array([dfdx1, dfdx2])
X = []



# Optimization loop
while np.linalg.norm(gradient(x0)) > tol:
    X.append(x0.copy())
    S = -gradient(x0)  # -----> STEP 3. 
    lam = np.dot(S, S) / np.dot(S, np.dot(H, S))  # -----> STEP 4.
    
    # Update x
    x0 = x0 + lam * S  # ----> STEP 5.

# Print results
print(f'Optimal Solution x = {x0}')  # printing the optimal solution
print(f'Optimal value f(x) = {objective_function(x0)}')  # printing the minimum value.

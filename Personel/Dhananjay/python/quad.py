#quadratic eqn
print("quadratic equation is of type ax^2 + bx + c= 0")
coeff_a = float(input("enter a"))
coeff_b = float(input("enter b"))
coeff_c = float(input("enter c"))
print("solution1: x=",((-coeff_b+((coeff_b**2-4*coeff_a*coeff_c)**0.5))/(2*coeff_a)))
print("solution2: x=",((-coeff_b-((coeff_b**2-4*coeff_a*coeff_c)**0.5))/(2*coeff_a)))
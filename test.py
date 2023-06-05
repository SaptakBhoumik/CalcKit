from scipy import integrate
x =[.1, .2, .5, .6, .7, .8, .9]
y = [1, 2, 3, 4, 4, 5, 6]
y_int = integrate.cumtrapz(y, x, initial=0)
print(y_int)
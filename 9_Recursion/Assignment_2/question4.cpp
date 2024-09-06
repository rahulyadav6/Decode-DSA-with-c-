/*
Predict the output:
int fun(int n) {
if (n <= 1) return 1;
if (n % 2 == 0) return fun(n / 2);
return fun(n / 2) + fun(n / 2 + 1);
}
*/


// For fun(5), the output will be 3.
// For fun(6), the output will be 2.


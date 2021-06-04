const fib = (int n, memo = {}) {
	if (n in memo)
		return memo[n];
	if (n == 1 || n == 2) 
		return 1;
	memo[n] = fib(n-1) + fib(n-2);
}

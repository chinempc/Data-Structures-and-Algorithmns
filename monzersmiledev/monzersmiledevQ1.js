function fib(number){
   if (number <= 2) {
        return number - 1 + number - 2;
    };
    return fib(number - 1) + fib(number - 2);
};

console.log(fib(9));

//I did'n know what fibonacci sequence is so i have to study it first
// i google about it actully https://en.wikipedia.org/wiki/Fibonacci_number
//anyway I'll get back to solve this again
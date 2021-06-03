import java.util.Scanner;

public class cmanemanQ1Java
{
    
    public static int fib(int n1, int n2, int n)
    {
        int sum = 0;
        
        for(int i = 0; i<n; i++)
        {
            sum = n1 + n2;
            
            System.out.println("Data: "+ n1 + " + " + n2 + " = " +  sum + "\n");
            
            n1 = n2;
            n2 = sum;
        }
        
        return sum;
    }
    
    public static void main(String[] args)
    {
        int num1 = 0, num2 = 1, n = 0;
        
        System.out.println("This program will invoke the Fibonacci sequence in Java\n");
        System.out.print("How many times would like the program to perform the sequence: ");
        Scanner s1 = new Scanner(System.in);
        
        n = s1.nextInt();
        
        System.out.print("You chose: " + n + " times\n\n");
        
        fib(num1, num2, n);
    }
}



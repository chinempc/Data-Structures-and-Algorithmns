
/**
 * Write a description of class cmanemanQ2Java here.
 *
 * @author (your name)
 * 
 */
public class cmanemanQ2Java
{
    public static void DynFib(int[] ARR,int i, int sum)
    {
        if(i == 0)
        {
            sum = 0;
        }
        
        if(i<12)
        {
            sum = ARR[i-1] + ARR[i];
            
            System.out.println("Iteration: " + i + ": " + ARR[i-1] + " + " + ARR[i] + " = " + sum);
        
            ARR[i + 1] = sum;
            i++;
            
            DynFib(ARR, i, sum);
        }
    }
    
    public static void main(String[] args)
    {
        int[] arr = new int[]{0,1,0,0,0,0,0,0,0,0,0,0,0};
        int i = 1;
        int sum = 0;
        
        DynFib(arr,i, sum);
        
    }
}

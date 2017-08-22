import java.util.Scanner;
public class C_in_Java
{
    public native int sum(int[] a);
    static {
        System.loadLibrary("C_in_Java");
    }
    public static void main(String args[])
    {
        int i, sum;
		int[] a = new int[5];
		Scanner s = new Scanner(System.in);
		System.out.println("Enter elements of array:");
		for(i = 0; i < 5; i++)
		{
			a[i] = s.nextInt();
		}
        try
        {
            C_in_Java jdo = new C_in_Java();
            sum = jdo.sum(a);
        }catch(Exception e)
        {
            System.out.println("Alert: " + e.getMessage());
        }
    }
}

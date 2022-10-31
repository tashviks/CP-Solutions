import java.util.*;
public class MyClass 
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in); 
     String str =sc.nextLine();
     String copy = str.toUpperCase();
     System.out.print(copy.charAt(0));
     copy = str.substring(1 , str.length());
     System.out.println(copy);
    }
}
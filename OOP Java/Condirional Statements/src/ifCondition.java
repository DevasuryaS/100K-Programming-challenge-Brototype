
import java.util.Scanner;

/*public class ifCondition {
    public static void main(String ar[]){
        System.out.println("Enter a number: ");
        Scanner s = new Scanner(System.in);

        int num = s.nextInt();

        if(num > 0)
        {
            System.out.println("The number is positive.");
        }
        else if (num < 0)
        {
            System.out.println("The number is negative.");
        }
        else
        {
            System.out.println("The number is zero.");
        }

    }

}*/

public class ifCondition {
    public static void main(String ar[]) {

        Scanner s = new Scanner(System.in);

        System.out.println("Enter the limit: ");

        int limit = s.nextInt();
        int sum;
        sum = 0;

        for(int i = 0;i<=limit;i++){
            sum = sum+i;
        }

        System.out.println("Result = "+sum);
    }

}
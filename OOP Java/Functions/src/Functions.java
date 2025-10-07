import java.util.Scanner;

public class Functions {
    public static void main(String a[]) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter first number: ");
        int num1 = s.nextInt();

        System.out.println("Enter second number: ");
        int num2 = s.nextInt();

        int result = Sum(num1,num2);

        System.out.println("Result = " + result);

    }


    static int Sum(int a, int b) {
        int sum = a + b;
        return sum;
    }
}
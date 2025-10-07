public class SumObject {
    public static void main(String ar[]){
        int num1 = 20;
        int num2 =30;

        int num3 = 100;
        int num4 = 50;

        SumClass s1 = new SumClass();
        SumClass s2 = new SumClass();
        s1.CalculateSum(num1,num2);
        s1.display();

        s2.CalculateSum(num3,num4);
        s2.display();
    }
}

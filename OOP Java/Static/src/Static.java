public class Static {

    int a = 10;
    static int b = 20;

    public static void main(String ar[]){


        Static h = new Static();
        Static h1 = new Static();

        System.out.println("a = "+h.a);

        h1.b = 30;
        System.out.println("h1.b = "+h1.b);
        h.b = 50;
        h.hello();
        System.out.println("h1.b = "+h1.b);

        h.a = 200;
        System.out.println("h.a = "+h.a);
        h1.a = 1300;
        System.out.println("h.a = "+h.a);
        System.out.println("h1.a = "+h1.a);
    }
    void hello(){

    }
}

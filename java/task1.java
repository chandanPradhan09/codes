public class task1 {
    void method1(){
        task1 obj1 = new task1();
        obj1.meth5();
        int a=10;
        System.out.println(10);
        System.out.println(54+a);
    }
    void meth2(){
        int a=20;
        System.out.println(78-a);
    }
    void meth3(){
        int a=30;
        task1 obj1=new task1();
        System.out.println(89+1);
        obj1.method1();
        System.out.println(10);
    }
    void meth4(){
        int a=10;
        System.out.println(89);
        System.out.println(85);
        System.out.println(44);

    }
    void meth5(){
        System.out.println(77);
        task1 obj1= new task1();
        obj1.meth2();
        System.out.println(99);

    }
    public static void main(String[] args) {
        System.out.println("start");
        task1 aobj=new task1();
        aobj.meth3();
        System.out.println("end");
    }
}

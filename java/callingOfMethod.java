public class callingOfMethod {

  void method1() {
    System.out.println(10);
    callingOfMethod aobj = new callingOfMethod();
    aobj.method2();
    System.out.println(55);
  }

  void method2() {
    int a = 78;
    int b = 22;
    System.out.println(a + b);
  }

  public static void main(String[] args) {
    System.out.println("start");
    callingOfMethod aobj = new callingOfMethod();
    aobj.method1();
    System.out.println("End");
  }
}

public class first {

  public void add() {
    int a = 4;
    int b = 5;
    System.out.println("addition is : " + (a + b));
  }

  public void sub() {
    int a = 6;
    int b = 5;
    System.out.println("subtraction is : " + (a - b));
  }

  public void mul() {
    int a = 4;
    int b = 5;
    System.out.println("multiplication is : " + (a * b));
  }

  public void div() {
    int a = 4;
    int b = 5;
    System.out.println("division is : " + (a / b));
  }

  public static void main(String[] args) {
    first aobj = new first();
    aobj.add();
    aobj.sub();
    aobj.mul();
    aobj.div();
    System.out.println("Hello world");
  }
}

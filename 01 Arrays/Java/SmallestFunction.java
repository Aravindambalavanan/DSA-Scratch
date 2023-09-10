import java.util.Scanner;

public class SmallestFunction {
    public static int Smallest(int[] array, int n) {

        int Smallest = array[0];

        for (int i = 0; i < n; i++) {
            if (array[i] < Smallest) {
                Smallest = array[i];
            }
        }
        return Smallest;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("enter the size of the array:");

        int n = sc.nextInt();

        int[] array = new int[n];

        System.out.println("enter the elements of the array:");

        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }

        int Smallest = Smallest(array, n);

        System.out.println(Smallest);

        sc.close();
    }
}

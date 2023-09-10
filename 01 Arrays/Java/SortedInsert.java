import java.util.Scanner;

public class SortedInsert {
    public static void main(String[] args) {
        int index = 0;

        Scanner sc = new Scanner(System.in);

        int[] array = new int[50];

        System.out.println("enter the size of the array:");

        int n = sc.nextInt();

        System.out.println("enter the elements of the array:");

        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }

        System.out.println("enter the value to be inserted");

        int val = sc.nextInt();

        for (int i = 0; i < n; i++) {
            if (array[i] > val) {
                index = i;
            }
        }
        for (int i = n - 1; i >= index; i--) {
            array[i + 1] = array[i];
        }
        array[index] = val;
        n++;

        for (int i = 0; i < n; i++) {
            System.out.println(array[i]);
        }

        sc.close();
    }
}

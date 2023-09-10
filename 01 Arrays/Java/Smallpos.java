import java.util.Scanner;

public class Smallpos {
    public static void main(String[] args) {
        int index = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("enter the size of the array:");

        int n = sc.nextInt();

        int[] array = new int[n];

        System.out.println("enter the elements of the array:");

        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }
        int smallest = array[0];

        for (int i = 0; i < n; i++) {
            if (smallest > array[i]) {
                smallest = array[i];
                index = i;
            }
        }
        System.out.printf("the smallest element in the array is %d and its index is %d", smallest, index);
        sc.close();
    }
}

import java.util.Scanner;

public class Duplicate {
    public static void main(String[] args) {
        int flag = 0;

        Scanner sc = new Scanner(System.in);

        System.out.println("enter the size of the array:");

        int n = sc.nextInt();

        int[] array = new int[n];

        System.out.println("enter the elements of the array:");

        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (array[i] == array[j]) {
                    flag = 1;
                    System.out.printf("the duplicate element is present in the array at index %d", j);
                }
            }
        }
        if (flag == 0) {
            System.out.println("The Array does not contain any duplicate elements");
        }
        sc.close();
    }
}

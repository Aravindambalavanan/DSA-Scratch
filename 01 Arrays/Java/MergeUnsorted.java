import java.util.Scanner;

public class MergeUnsorted {
    public static void main(String[] args) {
        int index = 0;

        int[] array1 = new int[50];

        int[] array2 = new int[50];

        int[] array3 = new int[100];

        Scanner sc = new Scanner(System.in);

        System.out.println("enter the size of first array:");

        int n1 = sc.nextInt();

        System.out.println("enter the elements of first array: ");

        for (int i = 0; i < n1; i++) {

            array1[i] = sc.nextInt();
        }

        System.out.println("enter the size of the second array:");

        int n2 = sc.nextInt();

        System.out.println("enter the elements of second array:");

        for (int i = 0; i < n2; i++) {
            array2[i] = sc.nextInt();
        }

        int m = n1 + n2;

        for (int i = 0; i < n1; i++) {
            array3[index] = array1[i];
            index++;
        }
        for (int i = 0; i < n2; i++) {
            array3[index] = array2[i];
            index++;
        }

        for (int i = 0; i < m; i++) {
            System.out.println(array3[i]);
        }

        sc.close();
    }
}

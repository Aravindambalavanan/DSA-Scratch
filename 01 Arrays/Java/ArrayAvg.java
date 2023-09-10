import java.util.Scanner;

public class ArrayAvg {
    public static void main(String[] args) {
        int sum = 0;
        Scanner sc = new Scanner(System.in);

        System.out.println("enter the size of the array:");

        int n = sc.nextInt();

        int[] array = new int[n];

        System.out.println("enter the elements of the array:");

        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }
        for (int i = 0; i < n; i++) {
            sum += array[i];
        }
        int avg = sum / n;

        System.out.printf("the  avg of the array of size %d is %d", n, avg);

        sc.close();
    }
}

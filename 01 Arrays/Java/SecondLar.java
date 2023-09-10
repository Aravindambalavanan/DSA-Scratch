import java.util.Scanner;

public class SecondLar {
    public static void main(String[] args) {
        int largest, secondLargest;

        Scanner sc = new Scanner(System.in);

        System.out.println("enter the size of the array:");

        int n = sc.nextInt();

        int[] array = new int[n];

        System.out.println("enter the elements of the array:");

        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }
        largest = array[0];
        secondLargest = array[0];

        for (int i = 0; i < n; i++) {
            if (largest < array[i]) {
                secondLargest = largest;
                largest = array[i];
            } else if (largest > array[i] && secondLargest < array[i]) {
                secondLargest = array[i];
            }
        }
        System.out.printf("the second largest element in the array is %d", secondLargest);
        sc.close();
    }
}

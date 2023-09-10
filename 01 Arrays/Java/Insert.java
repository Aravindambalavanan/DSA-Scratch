import java.util.Scanner;

class Insert {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] array = new int[50];

        System.out.println("enter the size of the array:");

        int n = sc.nextInt();

        System.out.println("enter the elements of the array:");

        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }

        System.out.println("enter the value you want to insert:");

        int val = sc.nextInt();

        System.out.println("enter the position you want to insert:");

        int pos = sc.nextInt();

        for (int i = n - 1; i >= pos - 1; i--) {
            array[i + 1] = array[i];
        }

        array[pos - 1] = val;
        n++;

        for (int i = 0; i < n; i++) {
            System.out.println(array[i]);
        }

        sc.close();
    }
}

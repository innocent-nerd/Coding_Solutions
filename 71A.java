import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        String[] arr = new String[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.next();
        }

        for (int i = 0; i < n; i++) {
            if (arr[i].length() > 10) {
                int ch = arr[i].length() - 2;
                arr[i] = "" + arr[i].charAt(0) + ch + arr[i].charAt(arr[i].length() - 1);
            }
        }

        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
    }
}
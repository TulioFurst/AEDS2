
/**
 * Main
 */
import java.util.Scanner;

public class Main {

    public static String getEntrada() {
        String palindromo = MyIO.readLine();

        return palindromo;
    }

    public static Boolean ehPalindromo(String palindromo) {
        boolean status = true;
        int size = palindromo.length();
        int i = 0;

        while (status && i < size) {
            if (palindromo.charAt(i) == palindromo.charAt(size - 1 - i)) {
                i++;
                continue;
            }
            status = false;
        }

        return status;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String palindromo = getEntrada();

        while (!palindromo.equals("FIM")) {

            if (ehPalindromo(palindromo)) {
                System.out.println("SIM");
            }

            else {
                System.out.println("NAO");
            }
            palindromo = getEntrada();
        }

    }
}

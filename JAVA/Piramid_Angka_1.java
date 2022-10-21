/*

     1
    121
   12321
  1234321
 123454321
12345654321

*/

public class Piramid_Angka_1 {
    public static void main(String[] args) {
        int tinggi = 6;

        for(int baris = 1; baris <= tinggi; baris++) {
            for(int kolom = 0; kolom < tinggi - baris; kolom++) {
                System.out.print(" ");
            }
            for(int kolom = 1; kolom <= baris; kolom++) {
                System.out.print(kolom);
            }
            for(int kolom = baris - 1; kolom >= 1; kolom--) {
                System.out.print(kolom);
            }
            System.out.println();
        }
    }
}

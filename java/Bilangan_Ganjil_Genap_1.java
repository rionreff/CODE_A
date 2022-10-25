/*

Masukkan Bilangan : 5
5 adalah Bilangan GANJIL

*/

import java.util.Scanner;

public class Bilangan_Ganjil_Genap_1 {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int bilangan;
        String jenis;

        System.out.print("Masukkan Bilangan : ");
        bilangan = scn.nextInt();

        if(bilangan % 2 == 0) {
            jenis = "GENAP";
        }
        else {
            jenis = "GANJIL";
        }

        System.out.println(bilangan + " adalah Bilangan " + jenis);
    }
}

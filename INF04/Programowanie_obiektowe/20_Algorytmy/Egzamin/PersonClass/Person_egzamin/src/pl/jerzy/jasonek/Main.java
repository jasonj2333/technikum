package pl.jerzy.jasonek;

import java.util.Scanner;

class Osoba{
    private int id;
    private String imie;
    static int licznik = 0;

    Osoba(){
        id = 0;
        imie = "";
        licznik++;
    }

    Osoba(int id, String imie){
        this.id = id;
        this.imie = imie;
        licznik++;
    }

    Osoba(Osoba osoba){
        id = osoba.id;
        imie = osoba.imie;
        licznik++;
    }

    void powitanie(String gosc){
        if(imie.equals("")) System.out.println("Brak danych");
        else System.out.println("Czesc " + gosc + ", mam na imie " + imie);
    }

}

public class Main {

    public static void main(String[] args) {
        System.out.println("Liczba zarejestrowanych osob to: " + Osoba.licznik);
        Osoba osoba1 = new Osoba();
        
        Scanner scanner = new Scanner(System.in);
        System.out.print("Podaj id: ");
        int id = scanner.nextInt();
        System.out.print("Podaj imie: ");
        String imie = scanner.next();
        
        Osoba osoba2 = new Osoba(id, imie);
        
        Osoba osoba3 = new Osoba(osoba2);
        
        osoba1.powitanie("Jan");
        osoba2.powitanie("Jan");
        osoba3.powitanie("Jan");

        System.out.println("Liczba zarejestrowanych osob to: " + Osoba.licznik);
    }
}

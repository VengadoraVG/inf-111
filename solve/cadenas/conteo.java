import java.util.Scanner;

public class conteo {
  public static void main(String[] args) {
    Scanner lector = new Scanner(System.in);
    String S = lector.nextLine();

    int[] conteo = new int[1000];  //el código ASCII tiene 128 caracteres!! 
    //pero por seguridad, le pondremos 1000 ^w^.
    //En Java todos los vectores se llenan con 0s al "nacer"

    for(int i=0; i<S.length(); i++) 
      conteo[S.charAt(i)]++;

    for(int i=0; i<1000; i++) 
      if(conteo[i] != 0) //solo imprime los caracteres que hayan aparecido
	System.out.println("'" + (char)i + "': " + conteo[i]);

  }
}

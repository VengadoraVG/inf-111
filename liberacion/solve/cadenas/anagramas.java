import java.util.Scanner;

public class anagramas {

  public static int[] censoDeLetras(String cadena) {
    int[] conteo = new int['z'-'a'];
    
    for(int i=0; i<cadena.length(); i++)
      if(cadena.charAt(i) != ' ')
	conteo[cadena.charAt(i)-'a']++;

    return conteo;
  }
  
  public static void main(String[] args) {
    boolean sw=true;
    String S, Q;
    Scanner lector = new Scanner(System.in);
    S = lector.nextLine();
    Q = lector.nextLine();

    int[] censoS = censoDeLetras(S);
    int[] censoQ = censoDeLetras(Q);
    
    for(int i=0; i<'z'-'a'; i++)
      if(censoS[i] != censoQ[i])
	sw = false;

    if(!sw)
      System.out.print("NO ");
    System.out.println("SON ANAGRAMAS");
  }
}


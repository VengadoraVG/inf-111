import java.util.*;

public class diagonal {

  public static void main(String[] args) {
    Scanner lector = new Scanner(System.in);
    int a=lector.nextInt(), b=lector.nextInt();
    int[][] M = new int[b][a];
    
    for(int i=0; i<a; i++)
      M[i/b][i] = 1;

    for(int i=0; i<b; i++) {
      for(int j=0; j<a; j++) 
	System.out.print(M[i][j] + " ");
    System.out.println();
    }
  } 

}

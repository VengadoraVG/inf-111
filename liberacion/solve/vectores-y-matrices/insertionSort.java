import java.util.*;

public class insertionSort {

  public static void main(String[] args) {
    Scanner lector = new Scanner(System.in);
    int n = lector.nextInt();
    int[] V = new int[n+1];
    
    for(int i=0; i<n; i++)
      V[i] = lector.nextInt();

    int x = lector.nextInt(), mySpot=0;

    while(V[mySpot] < x && mySpot < n) 
      mySpot++;
    
    for(int i=n; i>mySpot; i--) 
      V[i] = V[i-1];

    V[mySpot] = x;

    for(int i=0; i<n+1; i++)
      System.out.print(V[i] + " ");

    System.out.println();
  }

}

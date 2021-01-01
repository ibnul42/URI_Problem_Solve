import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n,i,j,k=1,dif;
		n = sc.nextInt();
		i = sc.nextInt();
		int a[]=new int[i];
		a[0] = sc.nextInt();
		for(j=1;j<i;j++) {
			a[j] = sc.nextInt();
			dif = a[j]-a[j-1];
			dif = (dif<0 ? -dif:dif);
			if(dif>n)
				break;
			else
				k++;
		}
		if(k==i)
			System.out.println("YOU WIN");
		else
			System.out.println("GAME OVER");	
	}

}

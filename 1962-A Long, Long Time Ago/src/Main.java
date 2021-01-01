import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n,i,j;
		n = sc.nextInt();
		for(i=0;i<n;i++) {
			j = sc.nextInt();
			if(j>2015)
				System.out.println((j-2014)+" A.C.");
			else if(j<2015)
				System.out.println((2015-j)+" D.C.");
			else 
				System.out.println("1 A.C.");
		}
	}

}

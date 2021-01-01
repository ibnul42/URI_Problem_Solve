import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int[] a = new int[4];
		int i,j,swap;
		
		for(i=0;i<4;i++)
			a[i] = sc.nextInt();
		for(i=1;i<4;i++)
		{
			for(j=i;j>0;j--)
			{
				if(a[j]<a[j-1])
				{
					swap = a[j-1];
					a[j-1] = a[j];
					a[j] =swap;
				}
			}
		}
		if(a[2]<(a[0]+a[1]) || a[3]<a[1]+a[2])
			System.out.println("S");
		else
			System.out.println("N");
	}

}

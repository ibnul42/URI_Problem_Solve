import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n,i;
		double x,y,result;
		char ch='%';
		
		x = sc.nextDouble();
		y = sc.nextDouble();
		result = ((y/x)*100)-100;
		System.out.printf("%.2f%c\n",result,ch);
	}
}

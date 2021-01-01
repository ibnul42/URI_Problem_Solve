import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int a = sc.nextInt();
		int arr[] = new int[a];
		arr[0] = sc.nextInt();
		int index=0;
		for(int i=1;i<a;i++) {
			arr[i] = sc.nextInt();
			if(arr[i]<arr[i-1]) {
				index = i+1;
				break;
			}
		}
		System.out.println(index);	
	}
}

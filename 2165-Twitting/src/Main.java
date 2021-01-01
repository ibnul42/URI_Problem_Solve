import java.util.*;

public class Main {

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        int i = name.length();
        if(i<=140)
            System.out.println("TWEET");
        else 
            System.out.println("MUTE");
	}

}

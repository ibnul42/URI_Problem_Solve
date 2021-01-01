import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int grenais=0,inter=0,gremio=0,draw=0,i=0,inp,in,gr;
		in = sc.nextInt();
		gr = sc.nextInt();
		grenais++;
		if(in==gr)
			draw++;
		else if(in>gr)
			inter++;
		else
			gremio++;
		while(i==0) {
			System.out.println("Novo grenal (1-sim 2-nao)");
			inp = sc.nextInt();
			if(inp==1) {
				grenais++;
				in = sc.nextInt();
				gr = sc.nextInt();
				if(in==gr)
					draw++;
				else if(in>gr)
					inter++;
				else
					gremio++;
			}
			else if(inp==2)
				i = 1;
		}
		System.out.println(grenais+" grenais");
		System.out.println("Inter:"+inter);
		System.out.println("Gremio:"+gremio);
		System.out.println("Empates:"+draw);
		if(inter==gremio)
			System.out.println("Não houve vencedor");
		else if(inter>gremio)
			System.out.println("Inter venceu mais");
		else
			System.out.println("Gremio venceu mais");

	}

}
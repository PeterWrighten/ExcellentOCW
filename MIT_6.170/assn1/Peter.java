import java.util.Scanner;


public class Peter{
	public Peter(int i){
		System.out.println("I Love Java Since "+ i + " and would still love it forever!");
	}
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		System.out.println("What year were you born?\n");
		int i = input.nextInt();
		Peter wright = new Peter(i);
	}

}

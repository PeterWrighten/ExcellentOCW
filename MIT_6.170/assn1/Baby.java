
class Main{
	public static void main(String[] args){
		Baby ourBaby = new Baby();
		System.out.println(ourBaby.name);
	}
}


public class Baby{
	String name = "John";
	double weight = 5.0;
	Baby[] siblings;
}

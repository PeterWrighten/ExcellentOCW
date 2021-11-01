
class HelloWorld{
	String myString;
	void shout(){
		myString = new String("Hello, World!");
		System.out.println(myString);
	}

	public static void main(String[] args){
		//Program execution begins here
		HelloWorld myHelloWorld = new HelloWorld();
		myHelloWorld.shout();
	}

}

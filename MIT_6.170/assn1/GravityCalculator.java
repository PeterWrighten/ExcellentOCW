


class GravityCalculator{
	public static void main(String[] args){
		double g = -9.81;
		double v0 = 0.0;
		double t = 10.0;
		double x0 = 0.0;
		double x = 0.5 * g * t * t + v0 * t + x0;
		System.out.println("The object's position after " + t + " second is " + x + " m.");
	}
}

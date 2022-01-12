import java.util.Random; 
		
	class starter {
	public static void main(String args[]) {
		// the string "I love to learn coding remotely." will appear in
		// t
		Random rand = new Random ();
		int rand_num1 = rand.nextInt(1000);
		System.out.println(rand_num1);
		double a;
		a = 0;
		a = rand.nextDouble();// 0 - 1, not 1
		System.out.println(a);
		//35.3 - 36.3
		a = a + 35.3;
		System.out.println(a);
		double b;
		b = rand.nextDouble();
		System.out.println(a);
		//double between 5 - 205
		b = b + 5;
		System.out.println(b);
	} 
	
	
	
	
	
	
	
	
	 
}

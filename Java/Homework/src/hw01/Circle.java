package hw01;

public class Circle {
	
	public static void main(String[] args) {
		
		final double PIE = 3.1415; //常數要加final,就不會被改變,變數名稱都大寫
		int r = 5;
		
		System.out.println("園面積:" + r*r*PIE);
		System.out.println("園周長:" + 2*r*PIE);
		
	}
}

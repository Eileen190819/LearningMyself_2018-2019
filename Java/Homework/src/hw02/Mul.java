package hw02;

public class Mul {
	
	public static void main(String[] args) {
		
		int mul=1;
//		for(int i=1 ; i<=10 ; i++) {
//			mul*=i;
//		}
//		
		int i=1;
		while(i<=10) {
			mul*=i;
			i++;		
		}
		
		System.out.println(mul);
	}
}

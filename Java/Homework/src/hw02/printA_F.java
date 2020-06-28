package hw02;

public class printA_F {
	
	public static void main(String[] args) {
		
		char a=65,b=66;
		
		for(int i=0;i<6;i++) {
			for(int j=0;j<i+1;j++) {
				System.out.print((char)(a+i));
			}
			System.out.println();
		}
	}
}

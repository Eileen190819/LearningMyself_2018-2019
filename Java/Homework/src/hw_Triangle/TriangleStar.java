package hw_Triangle;

public class TriangleStar {
	
	public static void main(String[] args){
		
		for(int i=0;i<5;i++) {
			
			for(int j=5;j>i;j--) {
				System.out.print(" ");				
			}
			for(int k=0;k<i+1;k++) {
				System.out.print("*");
											
			}
			for(int l=0;l<i;l++) {
				System.out.print("*");
			}
			System.out.println();
		}
		
	}

}

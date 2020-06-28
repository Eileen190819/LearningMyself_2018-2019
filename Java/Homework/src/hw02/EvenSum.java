package hw02;

public class EvenSum {
	
	public static void main(String[] args) { // "main" + alt + /
		
		int sum=0;
//		for(int i=0; i<=1000; i++) {
//			if(i%2==0) {
//				sum+=i;
//			}
//		}
		
		for(int i=0;i<=1000;i+=2) { //"i++" зя "i+=2"
			sum+=i;
		}
		System.out.println(sum);
	}

}

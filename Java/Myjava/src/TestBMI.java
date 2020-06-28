import java.util.Scanner;

public class TestBMI {

	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
//		System.out.println("請輸入身高");
		int h=sc.nextInt();
//		System.out.println("請輸入體重");
//		int w=sc.nextInt();
		double BMI=19;
//		BMI = w / (h*h);
		
		
		if(BMI<18.5) {
			System.out.println("過瘦!!!");
		}
		else if(18.5<=BMI && BMI<24) {
			System.out.println("正常");			
		}
		else {
			System.out.println("過胖");			
		}
		

	}

}

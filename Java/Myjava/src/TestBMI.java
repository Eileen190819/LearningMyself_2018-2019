import java.util.Scanner;

public class TestBMI {

	public static void main(String[] args) {
		
		Scanner sc=new Scanner(System.in);
//		System.out.println("�п�J����");
		int h=sc.nextInt();
//		System.out.println("�п�J�魫");
//		int w=sc.nextInt();
		double BMI=19;
//		BMI = w / (h*h);
		
		
		if(BMI<18.5) {
			System.out.println("�L�G!!!");
		}
		else if(18.5<=BMI && BMI<24) {
			System.out.println("���`");			
		}
		else {
			System.out.println("�L�D");			
		}
		

	}

}

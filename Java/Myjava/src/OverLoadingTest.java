/*用覆載方式 去選擇輸出
 * 新建一個類別 定義兩個屬性 為 身高 和 體重  
 * 令定義兩個同名方法 一個 輸出BMI的判斷  一個算出BMI
 * 
 * */
public class OverLoadingTest {
	
	public static void main (String[] args) {
		int high=169,weight=50;
		double bmi;
		
		bmi=calculationBMI(high,weight);
		calculationBMI(bmi);

		
	}
	
	public static void calculationBMI(double bmi) {
		if(bmi<18) {
			System.out.println("過輕");
			
		}
		else if(18<=bmi && bmi<24) {
			System.out.println("正常");
		}
		else {
			System.out.println("過重");
		}
	}
	
	public static double calculationBMI(int high,int weight) {
		return weight/(high*high);
	}
	
	
}

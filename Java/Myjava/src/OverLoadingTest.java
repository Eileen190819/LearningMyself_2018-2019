/*���и��覡 �h��ܿ�X
 * �s�ؤ@�����O �w�q����ݩ� �� ���� �M �魫  
 * �O�w�q��ӦP�W��k �@�� ��XBMI���P�_  �@�Ӻ�XBMI
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
			System.out.println("�L��");
			
		}
		else if(18<=bmi && bmi<24) {
			System.out.println("���`");
		}
		else {
			System.out.println("�L��");
		}
	}
	
	public static double calculationBMI(int high,int weight) {
		return weight/(high*high);
	}
	
	
}

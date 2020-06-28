package hw01;

public class SumRe {
	
	public static void main(String[] args){
		System.out.println(5+5);
		//數字相加,5+5=10
		
		System.out.println(5+'5');
		//字元'5'等於整數53,由於整數層級高,相加以整數做運算,所以是整數5+整數53=58
		
		System.out.println(5+"5");
		//印出整數5再印出字串5,整數和字串相加時,會變成字串相加
	}
}

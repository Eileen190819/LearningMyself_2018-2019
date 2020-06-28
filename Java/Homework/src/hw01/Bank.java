package hw01;

public class Bank { //類別的開頭要大寫

	public static void main(String[] args) {

		double r = 0.02;
		double money=1500000;

		for (int i = 0; i < 10; i++) {

			money = money * (1 + r);
		}
		System.out.println(money);
		
		//先設中斷點,右鍵debug as -> step over 
	}

}

package hw01;

public class Bank { //���O���}�Y�n�j�g

	public static void main(String[] args) {

		double r = 0.02;
		double money=1500000;

		for (int i = 0; i < 10; i++) {

			money = money * (1 + r);
		}
		System.out.println(money);
		
		//���]���_�I,�k��debug as -> step over 
	}

}

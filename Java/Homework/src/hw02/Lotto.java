package hw02;

public class Lotto {

	public static void main(String[] args) {

//		int x;
//		for (int i = 0; i <= 4; i++) {
//
//			if (i == 4)
//				continue;
//			else {
//				for (int j = 0; j <= 9; j++) {
//					if (j == 4)
//						continue;
//					else {
//						if (i == 0) {
//							if (j == 0)
//								continue;
//							else {
//								System.out.print(j + " ");
//							}
//						} else {
//							System.out.print(i);
//							System.out.print(j + " ");
//						}
//
//					}
//				}
//			}
//		}
		
		// ctrl + shift + f 格式化程式
		// ctrl + / 框起來的部分加註解

		for (int j = 0; j <= 30; j += 10) {
			for (int j2 = 0; j2 <= 9; j2++) {
				if (j2 != 4 && ((j + j2) != 0)) {
					System.out.print(j + j2 + " ");
				}
			}
		}
	}
}

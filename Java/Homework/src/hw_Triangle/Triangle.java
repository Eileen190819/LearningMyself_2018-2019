package hw_Triangle;

public class Triangle {
	
	public static void main(String[] args) {
		
		int triA=3,triB=5,triC=4;
		
		if(triA+triB>triC || triA+triC>triB || triB+triC>triA) {
			
			if(triA==triB && triB==triC && triA==triC) {
				System.out.println("�o�O���T����");
			}
			else if(triA==triB || triB==triC || triA==triC) {
				System.out.println("�o�O���y�T����");
			}
			else if(triA*triA + triB*triB == triC*triC || triA*triA + triC*triC == triB*triB ||
					triB*triB +triC*triC == triA*triA) {
				System.out.println("�o�O�����T����");
			}
			
		}
	}

}

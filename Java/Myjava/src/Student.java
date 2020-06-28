
public class Student {
	static int score=80;
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		play(5);
		study(4);
		System.out.println(score);

	}
	public static void play(int hours) {
		score-=hours;
	}
	
	public static void study(int hours) {
		score+=hours;
	}
	
}

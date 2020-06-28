package hw01;

public class DaysHours {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		long a = 256559;
		long day,hour,min,sec;
		
		sec = a%60;
		min = (a/60)%60;
		hour = (a/60/60)%24;
		day = a/60/60/24;
	
		
		System.out.println(a +"為"+ day + "天" + hour + "時" + min + "分" + sec + "秒");
		
	}

}

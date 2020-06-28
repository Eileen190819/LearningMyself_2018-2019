package ch07;

 class Car {
	
		String brand;
		String color;
		int price;
		int km = 0;
		
		
		public void showInfo(){
			System.out.println("�P�l:" + brand);
			System.out.println("����:" + price);
			System.out.println("���{:" + km);
		}
		
		public void drive(String X) {
			if(X == "D") {
				km++;
			}
			else if(X == "R") {
				km--;
			}
		}
		
		
		
		
	

}

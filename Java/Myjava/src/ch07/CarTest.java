package ch07;

public class CarTest {

	public static void main(String[] args) {
		
		Car myCar = new Car();
		myCar.brand = "A";
		myCar.color = "red";
		myCar.km = 100;
		myCar.price = 100000;
		
		Car yourCar = new Car();
		yourCar.brand = "B";
		yourCar.color = "white";
		yourCar.km = 105;
		yourCar.price = 200000;
		
		myCar.showInfo();
		myCar.drive("D");
		myCar.showInfo();
		
		yourCar.showInfo();
		yourCar.drive("R");
		yourCar.showInfo();
			
	}
}


package java1116;

class Beverage {
}
class Beer extends Beverage {
}
class Boricha extends Beverage {
}

class Cup {
	private Object beverage;
	
	public Object getBeverage() {
		return beverage;
	}
	
	public void setBeverage(Object beverage) {
		this.beverage = beverage;
	}
}

public class GenericClass1Demo {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Cup c = new Cup();
		
		c.setBeverage(new Beer());
		Beer b1 = (Beer) c.getBeverage();
		
		c.setBeverage(new Boricha());
		//b1 = (Beer) c.getBeverae(); // ¿À·ù
	}

}

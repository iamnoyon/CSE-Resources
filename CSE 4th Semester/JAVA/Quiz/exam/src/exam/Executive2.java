package exam;

public class Executive2 extends manager2 {
	private double bonous;
	public Executive2(String name, double salary, String department, double bonous) {
		super(name, salary, department);
		this.setBonous(bonous);
	}
	
	public void setBonous(double bonous) {
		this.bonous = bonous;
	}
	public double getBonous() {
		return bonous;
	}
	
	public String toString() {
		return super.toString() + "\nBonous = " + this.bonous;
	}

}

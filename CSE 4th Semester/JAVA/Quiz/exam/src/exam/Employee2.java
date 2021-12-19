package exam;

public class Employee2 {
	private String name;
	private double salary;
	
	public Employee2(String name, double salary ) {
		this.setName(name);
		this.setSalary(salary);
	}
	
	private void setName(String name) {
		this.name = name;
	}
	
	private void setSalary(double salary) {
		this.salary = salary;
	}
	
	public String getName() {
		return name;
	}
	public double getSalary() {
		return salary;
	}
	
	public String toString() {
		return getClass().getName() + "\nName = " + this.getName() + "\nSalary = " + this.getSalary();
	}
}

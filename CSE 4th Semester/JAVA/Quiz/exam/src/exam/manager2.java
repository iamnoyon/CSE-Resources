package exam;

public class manager2 extends Employee2 {
	private String department;

	public manager2(String name, double salary, String department) {
		super(name, salary);
		this.setDepartment(department);
	}

	public void setDepartment(String department) {
		this.department = department;
		
	}
	public String getDepartment() {
		return department;
	}


	public String toString() {
		return super.toString() + "\nDepartment = "+this.getDepartment();
	}
}

package exam;

public class Executive extends Manager {
    private double bonus;

    public Executive(String name, double salary, String department, double bonus) {
        super(name, salary, department);
        setBonus(bonus);
    }

    public double getBonus() {
        return this.bonus;
    }

    public void setBonus(double bonus) {
        this.bonus = bonus;
    }

    public String toString() {
        return super.toString() + " bonus: " + this.getBonus();
    }
}
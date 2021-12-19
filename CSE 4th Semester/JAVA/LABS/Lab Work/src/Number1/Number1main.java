package Number1;

import java.util.Scanner;

public class Number1main {

	public static void main(String[] args) {
		Scanner reader = new Scanner(System.in);
		System.out.print("Input weight in pounds: ");
		float weight = reader.nextFloat();
		System.out.print("Input weight in inches: ");
		float height = reader.nextFloat();
		weight = weight * 0.453592f;
		height = height * .0254f;
		double BMI = weight / (height * height);
		System.out.println("Body Mass Index is " + BMI);
reader.close();

	}

}

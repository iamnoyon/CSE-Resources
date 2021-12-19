package exam;

import java.awt.Rectangle;

@SuppressWarnings("serial")
public class BetterRectangle2 extends Rectangle {
	public BetterRectangle2(int x, int y, int width, int height) {
		super(x, y, width, height);

		this.setLocation(x, y);
		this.setSize(width, height);
	}

	public double getPerimeter() {
		return 2 * (super.getHeight() + super.getWidth());
	}

	public double getArea() {
		return super.getHeight() * super.getWidth();
	}

	public String toString() {
		return getClass().getName() + "\nPerimeter = " + this.getPerimeter() + "\nArea = " + this.getArea()
				+ "\nLocation = " + this.getLocation() + "\nSize = " + this.getSize();

	}

}

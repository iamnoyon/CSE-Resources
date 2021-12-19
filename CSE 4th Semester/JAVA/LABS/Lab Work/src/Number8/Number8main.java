package Number8;

import java.io.File;

public class Number8main {

	public static void main(String[] args) {
		File file = new File("C:\\Users\\noyon\\OneDrive\\Desktop\\input.txt");
		if (file.exists()) {
			System.out.println("File is exist and details about the File.... ");
			System.out.println("File Name: " + file.getName());
			System.out.println("Absolute Path: " + file.getAbsolutePath());
			if (file.canRead()) {
				System.out.println("File is readable");
			}
			if (file.canWrite()) {
				System.out.println("File is writeable");
			}
			if (file.isFile()) {
				System.out.println("It is a file");
			}
			System.out.println("Length of file " + file.length() + " Bytes");
		} else {
			System.out.println("File not Found");
		}

	}

}

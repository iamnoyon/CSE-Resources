package Number9;

public class t1 extends Thread {
	public void run() {
		while(true) {
			System.out.println("Good Morning");
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}

}

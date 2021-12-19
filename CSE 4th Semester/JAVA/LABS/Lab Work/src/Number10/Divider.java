package Number10;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;

public class Divider implements ActionListener {
	JLabel l1,l2,l3;
	JTextField t1,t2,t3;
	JButton b;
	
	void division(){
		JFrame f = new JFrame();
		
		l1 = new JLabel("Num 1:");
		l1.setBounds(50,25, 200, 20);
		
		t1 = new JTextField();
		t1.setBounds(50, 50, 200, 20);
		
		l2 = new JLabel("Num 2:");
		l2.setBounds(50, 75, 200, 20);
		
		t2 = new JTextField();
		t2.setBounds(50, 100, 200, 20);
		
		b = new JButton("Divide");
		b.setBounds(50, 150, 200, 20);
		b.addActionListener(this);
		
		l3 = new JLabel("Result:");
		l3.setBounds(50, 175, 200, 20);
		
		t3 = new JTextField();
		t3.setBounds(50, 200, 200, 20);
			
		f.add(l1);
		f.add(t1);
		
		f.add(l2);
		f.add(t2);
		
		f.add(b);
		
		f.add(l3);
		f.add(t3);
		
		f.setSize(400,400);  
        f.setLayout(null);  
        f.setVisible(true);
	}
	@Override
	public void actionPerformed(ActionEvent e) {
		try {
				int num1 = Integer.parseInt(t1.getText());
				int num2 = Integer.parseInt(t2.getText());
				int result = num1/num2;
				t3.setText(""+result);
		}
		catch(ArithmeticException e1) {
			JOptionPane.showMessageDialog(null, "Arithmetic Exception");
		}
		catch(NumberFormatException e2) {
			JOptionPane.showMessageDialog(null, "Number Format Exception");
		}
			
}
}

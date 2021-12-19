package LoginRegister;

import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPasswordField;
import javax.swing.JTextField;

public class registration implements ActionListener {
	JLabel l1,l2,l3,l4,l5,l6,l7,l8;
	JTextField t1,t2,t5,t6,t7;
	JButton b1,b2;
	JPasswordField p1,p2;
	void registrationform(){
		JFrame f = new JFrame();
		f.setTitle("Registration Form in Java");
		
		l1 = new JLabel("Registration Form in windows form");
		l1.setForeground(Color.blue);
		l1.setFont(new Font("Serif", Font.BOLD, 20));
		l1.setBounds(100, 30, 400, 30);
		
		l2 = new JLabel("Name");
		l2.setBounds(80, 70, 200, 30);
		
		t1 = new JTextField();
		t1.setBounds(300, 70, 200, 30);
		
		
		l3 = new JLabel("Email");
		l3.setBounds(80, 110, 200, 30);
		
		t2 = new JTextField();
		t2.setBounds(300, 110, 200, 30);
		
		l4 = new JLabel("Create Password");
		l4.setBounds(80, 150, 200, 30);
		
		p1 = new JPasswordField();
		p1.setBounds(300, 150, 200, 30);
		
		l5 = new JLabel("Confirm Password");
		l5.setBounds(80, 190, 200, 30);
		
		p2 = new JPasswordField();
		p2.setBounds(300, 190, 200, 30);
		
		l6 = new JLabel("Country");
		l6.setBounds(80, 230, 200, 30);
		
		t5 = new JTextField();
		t5.setBounds(300, 230, 200, 30);
		
		l7 = new JLabel("State");
		l7.setBounds(80, 270, 200, 30);
		
		t6 = new JTextField();
		t6.setBounds(300, 270, 200, 30);
		
		l8 = new JLabel("Phone");
		l8.setBounds(80, 310, 200, 30);
		
		t7 = new JTextField();
		t7.setBounds(300, 310, 200, 30);
		
		b1 = new JButton("Submit");
		b1.setBounds(50, 350, 100, 30);
		b2 = new JButton("Clear");
		b2.setBounds(170, 350, 100, 30);
		
		b1.addActionListener(this);
		b2.addActionListener(this);
		
		f.add(l1);
		f.add(l2);
		f.add(t1);
		f.add(l3);
		f.add(t2);
		f.add(l4);
		f.add(p1);
		f.add(l5);
		f.add(p2);
		f.add(l6);
		f.add(t5);
		f.add(l7);
		f.add(t6);
		f.add(l8);
		f.add(t7);
		f.add(b1);
		f.add(b2);
		
		
		f.setSize(700,700);
		f.setLayout(null);
		f.setVisible(true);
		
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == b1) {
			int x = 0;
			String s1 = t1.getText();
			String s2 = t2.getText();
			char[] s3 = p1.getPassword();
			char[] s4 = p2.getPassword();
			String s8 = new String(s3);
			String s9 = new String(s4);
			String s5 = t5.getText();
			String s6 = t6.getText();
			String s7 = t7.getText();
			
			if(s8.equals(s9)) {
				try {
					Class.forName("com.mysql.jdbc.Driver");
					Connection con = DriverManager.getConnection("jdbc://mysql://localhost:80/jdb", "root", "");
					PreparedStatement ps = con.prepareStatement("Insert Into register values(?,?,?,?,?)");
					ps.setString(1, s1);
					ps.setString(2, s2);
					ps.setString(3, s8);
					ps.setString(4, s5);
					ps.setString(5, s6);
					ps.setString(6, s7);
					ResultSet rs = ps.executeQuery();
					x++;
					if(x>0) {
						JOptionPane.showMessageDialog(b1, "Data Saved Successfully");
					}
				}
				catch(Exception ex){
					System.out.println(ex);
					
				}
			}
			else {
				JOptionPane.showMessageDialog(b1, "Data Not Saved");
			}
			
		}
		else {
			t1.setText("");
			t2.setText("");
			p1.setText("");
			p2.setText("");
			t5.setText("");
			t6.setText("");
			t7.setText("");
		}
		
	}
public static void main(String[] args) {
	registration obj = new registration();
	obj.registrationform();
}

}

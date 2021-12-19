package Number10;

import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;


@SuppressWarnings("serial")
public class Division extends JFrame{
	private static final int FRAME_WIDTH = 400;
    private static final int FRAME_HEIGHT = 200;
    private JLabel l1;
    private JLabel l2;
    private JLabel l3;
    private JTextField t1;
    private JTextField t2;
    private JTextField t3;
    private JButton b;
    
    public Division() {
        this.createComponents();
        this.setTitle("Division");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setSize(FRAME_WIDTH, FRAME_HEIGHT);
        this.setVisible(true);
    }
    private void createComponents() {
        this.createLabels();
        this.createTextField();
        JPanel topPanel = new JPanel();
        topPanel.add(this.l1);
        topPanel.add(this.t1);
        topPanel.add(this.l2);
        topPanel.add(this.t2);
        this.add(topPanel, BorderLayout.NORTH);
        this.b = this.createButton();
 
        JPanel centerPanel = new JPanel();
        centerPanel.add(this.l3);
        centerPanel.add(this.t3);
        this.add(centerPanel, BorderLayout.CENTER);
        centerPanel.add(this.b);
    }
    private void createLabels() {
        this.l1 = new JLabel("NUM 1:");
        this.l2 = new JLabel("NUM 2:");
        this.l3 = new JLabel("Result:");
    }
    private void createTextField() {
        final int FIELD_WIDTH = 10;
        this.t1 = new JTextField(FIELD_WIDTH);
        this.t2 = new JTextField(FIELD_WIDTH);
        this.t3 = new JTextField(FIELD_WIDTH);
    }
    private JButton createButton() {
    	JButton b = new JButton("Divide");
        ActionListener listener = (ActionListener) new Divide();
        b.addActionListener(listener);
    	
        return b;
    }
    
    class Divide implements ActionListener{

		@Override
		public void actionPerformed(ActionEvent e) {
			if(e.getActionCommand()=="Divide") {
			
				try{
					int num1 = Integer.parseInt(t1.getText());
					int num2 = Integer.parseInt(t2.getText());
					int result = num1/num2;
					t3.setText(""+result);	
				}
				catch(ArithmeticException e1) {
					JOptionPane.showMessageDialog(null,"Arthimetic Exception");
				}
				catch(NumberFormatException e2)
				{
				JOptionPane.showMessageDialog(null,"NumberFormatException");
				}
			}
		}
    }
    
	@SuppressWarnings("unused")
	public static void main(String[] args) {
		JFrame frame = new Division();

	}

}

import acm.gui.TableLayout;
import acm.program.*;

import java.awt.Color;
import java.awt.event.*;
import javax.swing.*;

@SuppressWarnings("serial")
public class ISliders extends ConsoleProgram{

	JPanel Panel;
	JLabel labelName;
	JLabel labelMin;
	JLabel labelMax;
	JSlider Slider;
	JLabel sRead;
	Integer imin;
	Integer imax;
	
	public ISliders(String name, Integer min, Integer value, Integer max ) {
		Panel = new JPanel();
		labelName = new JLabel(name);
		labelMin = new JLabel(min.toString());
		labelMax = new JLabel(max.toString());
		Slider = new JSlider(min, max, value);
		sRead = new JLabel(value.toString());
		sRead.setForeground(Color.blue);
		Panel.setLayout(new TableLayout(1,5));
		Panel.add(labelName, "width = 100");
		Panel.add(labelMin, "width = 25");
		Panel.add(Slider, "width = 100");
		Panel.add(labelMax, "width = 100");
		Panel.add(sRead, "width = 80");
		imin = min;
		imax = max;
	} 
	
	public Integer getISlider() {
		return Slider.getValue();
	}
	
	public void setSlider(int val) {
		Slider.setValue(val);
		sRead.setText(val +"");
	}
}

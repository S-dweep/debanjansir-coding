/*<APPLET code="Filloval.class" WIDTH=500 HEIGHT=300></APPLET>
*/
import java.applet.Applet;
import java.awt.Graphics;
import java.awt.Color;
public class Filloval extends Applet
{
public void paint(Graphics g)
{
g.setColor(Color.red);
g.fillOval(20,20,60,60);
g.fillOval(70,70,60,60);
g.fillOval(120,120,60,60);
g.fillOval(170,70,60,60);
g.fillOval(250,20,60,60);
g.setColor(Color.blue);
g.fillRect(400,450,50,100);
g.drawRect(275,400,70,90);
g.setColor(Color.magenta);
g.fillRect(300,350,50,50);
}
}
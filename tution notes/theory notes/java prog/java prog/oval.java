/*<APPLET code="Filloval.class" WIDTH=100 HEIGHT=100></APPLET>
*/
import java.applet.Applet;
import java.awt.Graphics;
import java.awt.Color;
class Filloval extends Applet
{
public void paint(Graphics g)
{
g.setColor(Color.red);
g.fillOval(20,20,60,60);
}
}
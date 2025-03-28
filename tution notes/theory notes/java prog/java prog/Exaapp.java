/*<APPLET code="Exaapp.class" WIDTH=200 HEIGHT=300></APPLET>
*/
import java.applet.Applet;
import java.awt.Graphics;
import java.awt.Color;
public class Exaapp extends Applet
{
String text;
public void init()
{
setBackground(Color.red);
setForeground(Color.blue);
text="Good Morning India";
System.out.println("Initialized the applet");
}
public void start()
{
System.out.println("starting the applet");
}
public void stop()
{
System.out.println("stopping the applet");
}
public void destroy()
{
System.out.println("destroying the applet");
}
public void paint(Graphics g)
{
System.out.println("painting the applet");
g.drawString(text,10,10);
showStatus("This is status bar");
}
}
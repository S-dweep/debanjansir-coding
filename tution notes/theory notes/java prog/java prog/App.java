/*<APPLET code="App.class" WIDTH=900 HEIGHT=700></APPLET>
*/
import java.applet.*;
import java.awt.*;
public class App extends Applet
{
Font f1,f2;
public void init()
{
f1=new Font("Arial",Font.BOLD,60);
f2=new Font("Calibri",Font.BOLD,80);
}
public void paint(Graphics g)
{
g.setFont(f1);
g.drawString("This is my first Applet prog",90,100);
g.setFont(f2);
g.drawString("my name is khan",200,300);
}
}
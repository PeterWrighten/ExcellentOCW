import java.util.Iterator;
import java.util.ArrayList;

public class iter 
{
    
    public static void main(String[] args)
    {
        ArrayList<String> s = new ArrayList<String>();
        s.add("ok");
        s.add("yes");
        s.add("no");
        Iterator<String> iter = s.iterator();
        while(iter.hasNext())
        {
            System.out.println(iter.next());
        }

    }
}
import java.util.*;
class point implements Comparable<point>
{
    int x,y;
    point(int x,int y)
    {
        this.x=x;
        this.y=y;
    }
    public int compareTo(point p)
    {
        return this.x-p.x;
    }
}
class HelloWorld {
    public static void main(String[] args) {
        List<point> li= new ArrayList<point>();
        li.add(new point(20,7));
        li.add(new point(2,5));
        li.add(new point(10,6));
        Collections.sort(li);
        for(point i:li)
        {
            System.out.println(i.x+" "+i.y);
        }
    }
}
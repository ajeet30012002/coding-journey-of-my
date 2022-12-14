import java.util.*;
class point 
{
    int x,y;
    point(int x,int y)
    {
        this.x=x;
        this.y=y;
    }
}
class mycmp implements Comparator<point>
{
    public int compare(point p1,point p2)
    {
        return p1.x-p2.x;
    }
}
class HelloWorld {
    public static void main(String[] args) {
        List<point> li= new ArrayList<point>();
        li.add(new point(20,7));
        li.add(new point(2,5));
        li.add(new point(10,6));
        Collections.sort(li,new mycmp());
        for(point i:li)
        {
            System.out.println(i.x+" "+i.y);
        }
    }
}
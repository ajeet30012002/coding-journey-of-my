import java.util.*; 
import java.lang.*; 
import java.io.*; 
class point{
    int x,y;
    point(int x,int y)
    {
        this.x=x;
        this.y=y;
    }
}
class mycom implements Comparator<point>
{
     public int compare(point p1,point p2)
    {
        return p1.x-p2.x;
    }
}
class HelloWorld {
   
    public static void main(String[] args) {
        point arr[]={
            new point(10, 20),
            new point(3, 12),
            new point(5, 7)};
            Arrays.sort(arr,new mycom());
            //for(int i=0;i<arr.lenght;i++)
            for(int i = 0; i < arr.length; i++)
            {
                System.out.print(arr[i].x + "  " + arr[i].y);
                System.out.println();
            }
    }
}
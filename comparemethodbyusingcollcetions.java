import java.util.*;
class HelloWorld {
    public static void main(String[] args) {
        Integer arr[]={2,10,9,0,1};
        Arrays.sort(arr, Collections.reverseOrder()); 
        // for(int i=0;i<arr.length;i++)
        // {
            System.out.println(Arrays.toString(arr));
            System.out.println(arr);
        //}
    }
}
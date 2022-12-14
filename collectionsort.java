import java.util.*;
class HelloWorld {
    public static void main(String[] args) {
        List<Integer> li= new ArrayList<Integer>();
        li.add(20);
        li.add(2);
        li.add(10);
        Collections.sort(li,Collections.reverseOrder());
        System.out.println(li);
    }
}
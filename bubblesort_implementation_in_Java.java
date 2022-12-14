import java.util.*;
class HelloWorld {
    public static void bubble(int a[],int size)
    {
        boolean flag;
        for(int i=0;i<size-1;i++)
        {
            flag=false;
            for(int j=0;j<size-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    flag=true;
                }
            }
            if(flag==false)
            {
                break;
            }
        }
    }
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int size;
        System.out.println("Enter the size of the arrays");
        size=scan.nextInt();
        int [] a=new int [size];
        System.out.println("\nEnter the elements of the arrays");
        for(int i=0;i<size;i++)
        {
            a[i]=scan.nextInt();
        }
        bubble(a,size);
        System.out.println("\nThe Sorted Array is ");
        for(int i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
    }
}
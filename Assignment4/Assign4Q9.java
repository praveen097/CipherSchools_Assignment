import java.util.Scanner;

// Simple Java program to print next 
// greater elements in a given array

public class Assign4Q9{
	
    static void next(int arr[],int n){
        int current = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    current =arr[j];
                    break;
                }
            }
            System.out.println(arr[i] + "'s next greater is "+current);
        }
    }
	
	public static void main(String args[])
	{
        Scanner s=new Scanner(System.in);
        System.out.println("How many number do you want to enter :");
        int n=s.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=s.nextInt();
        }
		next(arr, n);
	}
}

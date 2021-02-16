import java.util.Scanner;

public class Assign2Q10 {
    public static int uniquePaths(int m, int n) {
        if(m == 1)
    return 1;
    int[][] dp = new int[m][n];
    for(int i = 1; i < n; ++i){
        dp[0][i] = 1;    
    }
    for(int j = 1; j < m; ++j){ 
        dp[j][0] = 1;
    }
    for(int i = 1; i < m; ++i) {
        for(int j = 1; j < n; ++j) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
        }
    }
    return dp[m-1][n-1];
    }
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter row size :");
        int row=s.nextInt();
        System.out.println("Enter row size :");
        int colums=s.nextInt();
        System.out.println(uniquePaths(row ,colums));
    }
}

import java.util.*;
public class Contest {
    public static void main(String[] args) {
    
        int a,b,c,d, Misha, Vasya;
        Scanner in = new Scanner(System.in);
        
        a = in.nextInt();
        b = in.nextInt();
        c = in.nextInt();
        d = in.nextInt();
        
        Misha = Math.max((3*a/10), (a-(a/250)*c));
        Vasya = Math.max((3*b/10), (b-(b/250)*d));
        
        if (Misha == Vasya){
            System.out.println("Tie");
        }
        else{
            if(Misha > Vasya){
                System.out.println("Misha");
            }
            else{
                System.out.println("Vasya");
            }
        }
    }
}
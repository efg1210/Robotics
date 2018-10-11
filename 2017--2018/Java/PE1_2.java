import java.util.Random; 

public class PE1_2 {
   public static void main(String[] args) {
      /*Finds the distance between (0,0) and (x,y)*/
      int x = Integer.parseInt(args[0]);
      int y = Integer.parseInt(args[1]);
      double distance = Math.sqrt((x * x) + (y * y));
      System.out.println(distance);
      
      /*Finds and outputs the sum of two random numbers
      between 1 and 6, doubly inclusive*/
      Random rand = new Random();
      int dieOne = rand.nextInt(6) + 1;
      int dieTwo = rand.nextInt(6) + 1;
      int dieSum = dieOne + dieTwo;
      System.out.println(dieSum);
      
      /*Finds out if the date is between March 20 and
      June 20, doubly inclusive, and out puts the bool
      of whether or not it is*/
      int m = Integer.parseInt(args[2]);
      int d = Integer.parseInt(args[3]);
      if(d > 31 || m > 12){
         System.out.println(false);
      }else if(m == 4 || m == 5){
         System.out.println(true);
      }else if(m == 3 && d >= 20){
         System.out.println(true);
      }else if(m == 6 && d <= 20){
         System.out.println(true);
      }else{
         System.out.println(false);
      }
   }
}
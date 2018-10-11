import java.util.Scanner;

public class cipher {
    
    public static void main(String[] args) {
        
        System.out.println("Code or decode c/d");
        Scanner sc = new Scanner(System.in).useDelimiter("");
        String direction = sc.next();
        
        System.out.println("What text do you want changed");
        sc = new Scanner(System.in);
        String message = sc.next();
        
        System.out.println("What is the cipher key (number, preferably between 1 and 25)");
        sc = new Scanner(System.in);
        int key = sc.nextInt();
        
        if(direction.equals("d")){
            key *= -1;
        }
        
        String encryptedMessage = "";
        encryptedMessage += encodeMessage(message, key);
        //I NEED TO FIGURE OUT IF THERE IS ANOTHER PART IN
        //THE SCANNER, AND IF SO MAKE THE MESSAGE THE NEXT
        //PART AND PUT THAT IN
        // while(sc.hasNext()){
        //     String newMessage = sc.next();
        //     encryptedMessage += " ";
        //     encryptedMessage += encodeMessage(newMessage, key);
        // }
        System.out.println(encryptedMessage);
   }

    public static String encodeMessage(String message, int key){
        String ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String alphabet = "abcdefghijklmnopqrstuvwxyz";
        String encryptedResult = "";
        
        for(int i = 0; i < message.length(); i++){
            
            char originalCharacter = message.charAt(i);

            if(ALPHABET.indexOf(originalCharacter) >= 0){
                int alphabeticIndex = ALPHABET.indexOf(originalCharacter);
                if(alphabeticIndex >= 0){
                    int newIndex = alphabeticIndex + key;
                    newIndex = newIndex % ALPHABET.length();
                    char newCharacter = ALPHABET.charAt(newIndex);
                    encryptedResult += Character.toString(newCharacter);
                }
            }else if(alphabet.indexOf(originalCharacter) >= 0){
                int alphabeticIndex = alphabet.indexOf(originalCharacter);
                if(alphabeticIndex >= 0){
                    int newIndex = alphabeticIndex + key;
                    newIndex = newIndex % alphabet.length();
                    char newCharacter = alphabet.charAt(newIndex);
                    encryptedResult += Character.toString(newCharacter);
                }
            }else{
                encryptedResult += Character.toString(originalCharacter);
            }
        }
        return encryptedResult;
    }
}
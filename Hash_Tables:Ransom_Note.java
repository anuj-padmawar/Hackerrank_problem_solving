import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the checkMagazine function below.
    static void checkMagazine(String[] magazine, String[] note) {

        if(note.length > magazine.length)
        {
            System.out.println("No");
            return;
        }

        HashMap<String,Integer> wordMap = new HashMap<String,Integer>();
        for(String word:magazine)
        {
            if(wordMap.containsKey(word))
            {
                int n=wordMap.get(word);
                wordMap.put(word,++n);
            }
            else
            {
                wordMap.put(word,1);
            }
        }

        for(String word:note)
        {
            if(wordMap.containsKey(word) && wordMap.get(word)>0)
            {
                int n=wordMap.get(word);
                n--;
                wordMap.put(word,n);
            }
            else
            {
                System.out.println("No");
                return;
            }
        }
        
        System.out.println("Yes");
        return;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        String[] mn = scanner.nextLine().split(" ");

        int m = Integer.parseInt(mn[0]);

        int n = Integer.parseInt(mn[1]);

        String[] magazine = new String[m];

        String[] magazineItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < m; i++) {
            String magazineItem = magazineItems[i];
            magazine[i] = magazineItem;
        }

        String[] note = new String[n];

        String[] noteItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            String noteItem = noteItems[i];
            note[i] = noteItem;
        }

        checkMagazine(magazine, note);

        scanner.close();
    }
}


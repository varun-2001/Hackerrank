import java.io.*;
import java.util.*;
import java.util.Stack;
import java.util.Queue;

public class QueuesAndStacks {
    // Write your code here.
    // ArrayDeque is faster than Stack 
    ArrayDeque <Character> stack = new ArrayDeque();
    ArrayDeque <Character> queue = new ArrayDeque();

    void pushCharacter(char ch){
        stack.push(ch);
    }
    char popCharacter(){
        return stack.pop();
    }
    void enqueueCharacter(char ch){
        queue.add(ch);
    }
    char dequeueCharacter(){
        return queue.remove();
    }



    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        // Convert input String to an array of characters:
        char[] s = input.toCharArray();

        // Create a Solution object:
        QueuesAndStacks p = new QueuesAndStacks();

        // Enqueue/Push all chars to their respective data structures:
        for (char c : s) {
            p.pushCharacter(c);
            p.enqueueCharacter(c);
        }

        // Pop/Dequeue the chars at the head of both data structures and compare them:
        boolean isPalindrome = true;
        for (int i = 0; i < s.length/2; i++) {
            if (p.popCharacter() != p.dequeueCharacter()) {
                isPalindrome = false;                
                break;
            }
        }

        //Finally, print whether string s is palindrome or not.
        System.out.println( "The word, " + input + ", is " 
                           + ( (!isPalindrome) ? "not a palindrome." : "a palindrome." ) );
    }
}
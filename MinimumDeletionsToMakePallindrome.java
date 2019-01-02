public class MinimumDeletionsToMakePallindrome{
    public String constructEntirePallindrome(String halfPallindrome, boolean present){
        String remainingPart = "";
        int offset = 0;
        if(present == true)
            offset = 1;
        for(int current = halfPallindrome.length()-1-offset; current>=0; current--){
            remainingPart += halfPallindrome.charAt(current);
        }
        String entirePallindrome = halfPallindrome.concat(remainingPart);
        return entirePallindrome;
    }

    public void DeleteToMakePallindrome(String word){
        int start = 0, end = word.length()-1, previousFoundAtEnd = word.length()-1;
        String pallindrome = "";
        boolean present = false;
        for(int i=0; i<word.length()-1; i++){
            
            start = i;
            end = previousFoundAtEnd;
            if(start == end){
                pallindrome += word.charAt(start);
                present = true;
            }
            while(start<end && word.charAt(start)!=word.charAt(end)){
                end--;
            }
            if(start<end && word.charAt(start)==word.charAt(end)){
                pallindrome += word.charAt(start);
                end--;
                previousFoundAtEnd = end;
            }
            

        }
        String entirePallindrome = constructEntirePallindrome(pallindrome, present);
        System.out.println(entirePallindrome );
        System.out.println("minimum number of deletions to make pallindrome = " + (word.length()-entirePallindrome.length()));
    }
    public static void main(String[] args){
        MinimumDeletionsToMakePallindrome object = new MinimumDeletionsToMakePallindrome();
        String word = "cadbba";
        object.DeleteToMakePallindrome(word);
    }
}
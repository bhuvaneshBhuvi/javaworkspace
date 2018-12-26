public class AllSubSequenceOfString{
    public String binaryString(int num){
        String binary = "";
        int quotient=-1;
        while(quotient != 0){
            binary = binary + (char)((num%2)+48);
            quotient = num/2;
            num /= 2;
        }
        return binary;
    }
    public boolean checkForValidBinary(String binaryString, int targetCountOfOnes){
        int countOfOnes=0;
        for(int i=0; i<binaryString.length(); i++){
            if(binaryString.charAt(i)=='1')
                countOfOnes++;
        }
        if(countOfOnes == targetCountOfOnes)
            return true;
        else
            return false;
    }
    public void printSequence(String toPrint, String sequence){
        for(int i=0; i<sequence.length(); i++){
            if(sequence.charAt(i)=='1')
                System.out.print(toPrint.charAt(i));
        }
        System.out.println();
    }
    public int calculatePower(int base, int power){
        int result = 1;
        for(int i=0; i<power; i++)
            result = result * base;
        return result;
    }
    public void computeSubSequences(String entireString, int lengthOfSubsequence){
        for(int i=(calculatePower(2, lengthOfSubsequence)-1); i< (calculatePower(2, entireString.length())); i++){
            String binaryForm = binaryString(i);
            if(checkForValidBinary(binaryForm, lengthOfSubsequence))
                printSequence(entireString, binaryForm);
        }
    }
    public static void main(String[] args){
        String entireString = "abcde";
        int lengthOfSubsequence = 1;
        AllSubSequenceOfString object = new AllSubSequenceOfString();
        object.computeSubSequences(entireString, lengthOfSubsequence);
    }
}
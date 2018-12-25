public class StringExpFb{
    char[] stack = new char[100];
    int top=-1;
    public void push(char toAdd){
        top += 1;
        stack[top] = toAdd;
    }
    public char pop(){
        return stack[top--];
    }
    public char peek(){
        return stack[top];
    }
    public void printStack(){
        int i;
        System.out.println("\n");
        for(i=0; i<=top; i++)
            System.out.print(stack[i]);
    }
    public int convertToInteger(String str){
        int count = 0;
        for(int i=0; i<str.length(); i++){
            count = (count * 10) + (str.charAt(i)-'0'); 
        }
        return count;
    }
    public String localExpand(String str){
        int i=0;
        String countInSB = "";
        String localString = "";
        while(str.charAt(i)>=48  && str.charAt(i)<=57){
            countInSB += str.charAt(i);
            i++;
        }
        int count = convertToInteger(countInSB);
        for(int index=0; index<count; index++){
            for(int stringIndex=i; stringIndex<str.length(); stringIndex++){
                localString += str.charAt(stringIndex);
            }
        }
        return localString;
    }
 
    public void expandString(String toExpand){
        int i;
        for(i=0; i<toExpand.length(); i++){
            String expandingString = "";
            if(toExpand.charAt(i)==']'){
                while(stack[top]!='['){
                    expandingString = pop() + expandingString;
                }
                pop();
                expandingString = pop() + expandingString;
                String expandedSubString = localExpand(expandingString);
                for(int index=0; index<expandedSubString.length(); index++)
                    push(expandedSubString.charAt(index));

            }
            else{
                push(toExpand.charAt(i));
            }
        }
    }
    public static void main(String[] args){
    //    String toExpand = "2[b2[ca]]";
    //    String toExpand = "3[a3[bd]e]";
        String toExpand = "2[ab2[cd]e2[fg]]";
        StringExpFb object = new StringExpFb();
        object.expandString(toExpand);
        object.printStack();
    }
}
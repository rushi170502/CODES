
class Quiz2{
    public static void main(String[] args) {
        StringBuffer sb = new StringBuffer();

        for(int i = 0; i < 18 ; i++){
            sb.append(i);
        }

        System.out.println(sb.length());
        System.out.println(sb.capacity());
    }
}

/*
 * Answe3:  26
 *          34
 * 
 * StringBuffer initial capacity is 16 when more than 16 characters are appended.
 * then capacity = (capacity + 1)* 2 [16+1 * 2 == 34]
 * 
 * And StringBuffer is mutable therfore apprend() doesn't return new object so it needs to be caught
 * but it adds in the same object and therefore the change is reflected
 * 
 * and here some 2 dights numbers therefore they considered as 2 characters in them that's why 
 * 
 * length = 26
 * capacity = 34
 */
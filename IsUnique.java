public class IsUnique {
    boolean isUnique(String s) {
        int u = 0;

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            int pos = c - 'a';
        
            if ((u & (1 << pos)) == 1)
                return false;
            else 
                u |= (1 << pos);
        }

        return true;
    }

    public static void main(String [] args) {
        IsUnique iu = new IsUnique();
        System.out.println(iu.isUnique(args[0]));
    }
}

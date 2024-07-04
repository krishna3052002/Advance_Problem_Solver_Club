import java.util.Comparator;
import java.util.Scanner;
import java.util.Vector;
import java.util.Collections;

public class D_Friends_and_the_Restaurant {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        long t;
        t=in.nextLong();
        for(long i=0;i<t;i++)
        {
            long defaultValue = 0L;
            int n;
            n=in.nextInt();
            Vector<Long> v = new Vector<>(Collections.nCopies(n, defaultValue));
            for(int j=0;j<n;j++)
            {
                long x=in.nextLong();
                v.set(j,v.get(j)-x);
            }
            for(int j=0;j<n;j++)
            {
                long x=in.nextLong();
                v.set(j,v.get(j)+x);
            }
            Collections.sort(v, new Comparator<Long>() {

                public int compare(Long o1, Long o2) {
                    return o2.compareTo(o1); // Descending order
                }
            });
            int l = 0, r = n - 1;
            long ans = 0;
            while (l < r)
            {
                if (v.get(l) > -1 && v.get(r) > -1)
                {
                    ans++;
                    l++;
                    r--;
                }
                else if (v.get(l) < 0 && v.get(r) < 0)
                {
                    break;
                }
                else if (v.get(l) > -1)
                {
                    if (v.get(l) >= Math.abs(v.get(r)))
                    {
                        ans++;
                        r--;
                        l++;
                    }
                    else
                    {
                        r--;
                    }
                }
            }
           System.out.println(ans);

        }
    }
}

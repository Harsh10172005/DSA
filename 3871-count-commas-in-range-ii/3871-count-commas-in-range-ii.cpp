class Solution {
public:
    long long countCommas(long long n) {
        long long t_count = 0;
        long long a = n-999;
        if(a>0){
            t_count+=a;

            a = n-999999;
            if(a>0){
                t_count+=a;

                a = n-999999999;
                if(a>0){
                    t_count+=a;

                    a = n-999999999999;
                    if(a>0){
                        t_count+=a;

                        a=n-999999999999999;
                        if(a>0){
                            t_count+=a;
                        }
                    }
                }
            }
        }
        return t_count;    
    }
};
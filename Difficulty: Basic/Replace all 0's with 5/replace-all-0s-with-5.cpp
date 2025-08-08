/*you are required to complete this method*/
class Solution {
  public:
         int convertFive(int n) {
        int i=0,num=0;
        
        if(n==0)
        num=5;
        
        while(n!=0)
        {
            int x = n%10;
            if(x==0)
            {
                num = num + (pow(10,i)*5);
            }
            else
            {
                num = num + (pow(10,i)*x);
            }
            n = n/ 10;
            i++;
        }
        return num;
    }
};
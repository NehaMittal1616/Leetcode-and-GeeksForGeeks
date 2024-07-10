class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int height=0;
        int red1=red;
        int blue1=blue;
       bool redball=true;

       // taking red ball in the  first row
        while(true)
        {
            int ballreq=height+1;
            if(redball)
            {
                if(red>=ballreq)
                {
                    red-=ballreq;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(blue>=ballreq)
            {
                blue-=ballreq;

            }
            else
            {
                break;
            }

            }
            height++;
            redball=!redball;
        }



        // taking blue ball as the first row
        bool blueball=true;
        int height1=0;
        while(true)
        {
            int req=height1+1;
            if(blueball)
            {
                if(blue1>=req)
            {
                blue1-=req;
            }
            else
            {
                break;
            }
            }
            else
            {
                if(red1>=req)
                {
                    red1-=req;
                }
                else
                {
                    break;
                }

            }
            height1++;
            blueball=!blueball;
        }
             return max(height,height1);

    }
};
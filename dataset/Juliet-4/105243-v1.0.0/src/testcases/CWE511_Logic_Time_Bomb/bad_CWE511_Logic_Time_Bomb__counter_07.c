static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
        {
            int count = 0;
            do
            {
                if (count == COUNT_CHECK)
                {
<START>
                    UNLINK("important_file.txt");
<END>
                }
                count++;
            }
            while(1 == 1);   
        }
    }
}

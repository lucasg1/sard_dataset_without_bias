void FUN0()
{
    if(globalFive==5)
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

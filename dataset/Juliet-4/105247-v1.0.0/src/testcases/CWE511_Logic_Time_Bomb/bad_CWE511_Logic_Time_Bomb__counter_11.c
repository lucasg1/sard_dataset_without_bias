void FUN0()
{
    if(globalReturnsTrue())
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

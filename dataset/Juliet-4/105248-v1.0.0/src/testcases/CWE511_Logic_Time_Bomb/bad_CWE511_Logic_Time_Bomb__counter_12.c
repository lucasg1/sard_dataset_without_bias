void FUN0()
{
    if(globalReturnsTrueOrFalse())
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
    else
    {
        {
            int count = 0;
            do
            {
                if (count == COUNT_CHECK)
                {
                    printLine("Happy New Year!");
                }
                count++;
            }
            while(1 == 1);   
        }
    }
}

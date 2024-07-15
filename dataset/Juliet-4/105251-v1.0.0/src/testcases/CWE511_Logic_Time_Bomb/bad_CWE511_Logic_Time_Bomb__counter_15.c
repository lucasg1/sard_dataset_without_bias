void FUN0()
{
    switch(6)
    {
    case 6:
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
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

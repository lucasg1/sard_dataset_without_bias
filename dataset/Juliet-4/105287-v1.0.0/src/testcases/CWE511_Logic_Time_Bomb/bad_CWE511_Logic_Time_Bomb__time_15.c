void FUN0()
{
    switch(6)
    {
    case 6:
    {
        time_t currentTime;
        time(&currentTime);
        if (currentTime > TIME_CHECK)
        {
<START>
            UNLINK("important_file.txt");
<END>
        }
    }
    break;
    default:
        printLine("Benign, fixed string");
        break;
    }
}

void FUN0()
{
    goto sink;
sink:
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
}

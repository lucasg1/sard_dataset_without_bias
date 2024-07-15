void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
    {
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
}

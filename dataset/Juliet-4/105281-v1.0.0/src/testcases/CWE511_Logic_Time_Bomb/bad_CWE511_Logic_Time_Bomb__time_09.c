void FUN0()
{
    if(GLOBAL_CONST_TRUE)
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

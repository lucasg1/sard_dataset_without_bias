static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
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

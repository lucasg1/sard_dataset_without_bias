static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
        srand((unsigned)time(NULL));
        if (rand() == NUM_CHECK)
        {
<START>
            UNLINK("important_file.txt");
<END>
        }
    }
}

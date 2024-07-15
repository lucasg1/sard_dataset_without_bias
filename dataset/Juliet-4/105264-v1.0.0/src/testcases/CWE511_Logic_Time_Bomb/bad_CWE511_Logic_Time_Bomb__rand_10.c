void FUN0()
{
    if(globalTrue)
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

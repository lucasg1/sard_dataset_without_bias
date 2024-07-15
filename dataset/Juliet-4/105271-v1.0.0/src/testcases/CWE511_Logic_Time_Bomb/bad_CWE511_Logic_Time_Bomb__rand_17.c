void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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

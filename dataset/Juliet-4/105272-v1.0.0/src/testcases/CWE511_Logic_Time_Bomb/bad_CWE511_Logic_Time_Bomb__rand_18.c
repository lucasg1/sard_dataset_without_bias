void FUN0()
{
    goto sink;
sink:
    srand((unsigned)time(NULL));
    if (rand() == NUM_CHECK)
    {
<START>
        UNLINK("important_file.txt");
<END>
    }
}

static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    if(FUN0())
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

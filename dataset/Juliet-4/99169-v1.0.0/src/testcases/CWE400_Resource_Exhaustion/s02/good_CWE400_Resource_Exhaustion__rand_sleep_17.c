void FUN0()
{
    int i,k;
    int count;
    count = -1;
    for(i = 0; i < 1; i++)
    {
        count = RAND32();
    }
    for(k = 0; k < 1; k++)
    {
        if (count > 0 && count <= 2000)
        {
            SLEEP(count);
            printLine("Sleep time OK");
        }
        else
        {
            printLine("Sleep time too long");
        }
    }
}
void FUN1()
{
    int h,j;
    int count;
    count = -1;
    for(h = 0; h < 1; h++)
    {
        count = 20;
    }
    for(j = 0; j < 1; j++)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}

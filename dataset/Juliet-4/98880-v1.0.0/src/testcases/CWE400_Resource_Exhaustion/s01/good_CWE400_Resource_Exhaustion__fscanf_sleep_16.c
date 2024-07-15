void FUN0()
{
    int count;
    count = -1;
    while(1)
    {
        fscanf(stdin, "%d", &count);
        break;
    }
    while(1)
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
        break;
    }
}
void FUN1()
{
    int count;
    count = -1;
    while(1)
    {
        count = 20;
        break;
    }
    while(1)
    {
        SLEEP(count);
        printLine("Sleep time possibly too long");
        break;
    }
}

void FUN0()
{
    int count;
    int *countPtr1 = &count;
    int *countPtr2 = &count;
    count = -1;
    {
        int count = *countPtr1;
        count = 20;
        *countPtr1 = count;
    }
    {
        int count = *countPtr2;
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
void FUN1()
{
    int count;
    int *countPtr1 = &count;
    int *countPtr2 = &count;
    count = -1;
    {
        int count = *countPtr1;
        fscanf(stdin, "%d", &count);
        *countPtr1 = count;
    }
    {
        int count = *countPtr2;
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

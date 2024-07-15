void FUN0()
{
    int count;
    count = -1;
    count = 20;
    {
        int countCopy = count;
        int count = countCopy;
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
void FUN1()
{
    int count;
    count = -1;
    count = RAND32();
    {
        int countCopy = count;
        int count = countCopy;
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

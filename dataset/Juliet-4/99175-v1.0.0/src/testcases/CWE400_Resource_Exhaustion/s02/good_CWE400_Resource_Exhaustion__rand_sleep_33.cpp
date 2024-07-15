namespace NAMESPACE0
{
void FUN0()
{
    int count;
    int &countRef = count;
    count = -1;
    count = 20;
    {
        int count = countRef;
        SLEEP(count);
        printLine("Sleep time possibly too long");
    }
}
void FUN1()
{
    int count;
    int &countRef = count;
    count = -1;
    count = RAND32();
    {
        int count = countRef;
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
} 

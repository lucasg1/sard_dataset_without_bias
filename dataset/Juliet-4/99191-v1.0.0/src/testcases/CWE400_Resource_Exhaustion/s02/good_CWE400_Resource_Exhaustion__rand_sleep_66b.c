void FUN0(int countArray[]);
void FUN1()
{
    int count;
    int countArray[5];
    count = -1;
    count = 20;
    countArray[2] = count;
    FUN0(countArray);
}
void FUN2(int countArray[]);
void FUN3()
{
    int count;
    int countArray[5];
    count = -1;
    count = RAND32();
    countArray[2] = count;
    FUN2(countArray);
}
void FUN0(int countArray[])
{
    int count = countArray[2];
    SLEEP(count);
    printLine("Sleep time possibly too long");
}
void FUN2(int countArray[])
{
    int count = countArray[2];
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

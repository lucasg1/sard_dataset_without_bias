void FUN0(int countArray[]);
void FUN1()
{
    int count;
    int countArray[5];
    count = -1;
    count = RAND32();
    countArray[2] = count;
    FUN0(countArray);
}
void FUN0(int countArray[])
{
    int count = countArray[2];
    {
        size_t i = 0;
<START>
        for (i = 0; i < (size_t)count; i++)
<END>
        {
            printLine("Hello");
        }
    }
}

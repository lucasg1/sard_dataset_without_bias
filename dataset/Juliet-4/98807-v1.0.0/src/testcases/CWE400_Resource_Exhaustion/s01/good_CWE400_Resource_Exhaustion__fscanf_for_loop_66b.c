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
    fscanf(stdin, "%d", &count);
    countArray[2] = count;
    FUN2(countArray);
}
void FUN0(int countArray[])
{
    int count = countArray[2];
    {
        size_t i = 0;
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}
void FUN2(int countArray[])
{
    int count = countArray[2];
    {
        size_t i = 0;
        if (count > 0 && count <= 20)
        {
            for (i = 0; i < (size_t)count; i++)
            {
                printLine("Hello");
            }
        }
    }
}

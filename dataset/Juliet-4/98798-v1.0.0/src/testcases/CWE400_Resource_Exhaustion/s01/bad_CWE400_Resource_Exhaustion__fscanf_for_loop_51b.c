void FUN0(int count);
void FUN1()
{
    int count;
    count = -1;
    fscanf(stdin, "%d", &count);
    FUN0(count);
}
void FUN0(int count)
{
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

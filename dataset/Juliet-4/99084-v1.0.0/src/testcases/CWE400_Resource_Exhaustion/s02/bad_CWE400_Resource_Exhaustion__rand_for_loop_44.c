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
void FUN1()
{
    int count;
    void (*funcPtr) (int) = FUN0;
    count = -1;
    count = RAND32();
    funcPtr(count);
}

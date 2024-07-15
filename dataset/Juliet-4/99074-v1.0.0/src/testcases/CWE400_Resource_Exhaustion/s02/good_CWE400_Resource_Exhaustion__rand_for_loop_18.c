void FUN0()
{
    int count;
    count = -1;
    goto source;
source:
    count = RAND32();
    goto sink;
sink:
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
void FUN1()
{
    int count;
    count = -1;
    goto source;
source:
    count = 20;
    goto sink;
sink:
    {
        size_t i = 0;
        for (i = 0; i < (size_t)count; i++)
        {
            printLine("Hello");
        }
    }
}

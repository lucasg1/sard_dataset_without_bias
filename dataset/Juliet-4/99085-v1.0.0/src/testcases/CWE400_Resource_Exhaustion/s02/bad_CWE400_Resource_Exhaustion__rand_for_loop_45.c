static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int count = VAR0;
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
    count = -1;
    count = RAND32();
    VAR0 = count;
    FUN0();
}

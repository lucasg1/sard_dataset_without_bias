static int VAR0;
static int VAR1;
static int VAR2;
void FUN0()
{
    int count = VAR0;
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}
void FUN1()
{
    int count;
    count = -1;
    count = RAND32();
    VAR0 = count;
    FUN0();
}

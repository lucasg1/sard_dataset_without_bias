int VAR0;
int VAR1;
int VAR2;
void FUN0();
void FUN1()
{
    int count;
    count = -1;
    count = RAND32();
    VAR0 = count;
    FUN0();
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0()
{
    int count = VAR0;
<START>
    SLEEP(count);
<END>
    printLine("Sleep time possibly too long");
}

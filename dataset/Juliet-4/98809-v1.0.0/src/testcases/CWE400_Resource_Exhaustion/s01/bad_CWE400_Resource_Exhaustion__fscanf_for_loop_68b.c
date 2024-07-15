int VAR0;
int VAR1;
int VAR2;
void FUN0();
void FUN1()
{
    int count;
    count = -1;
    fscanf(stdin, "%d", &count);
    VAR0 = count;
    FUN0();
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
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

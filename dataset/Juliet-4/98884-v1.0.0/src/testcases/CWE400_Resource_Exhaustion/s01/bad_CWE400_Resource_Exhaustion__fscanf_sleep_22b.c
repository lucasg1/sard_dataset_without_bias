int VAR0 = 0;
void FUN0(int count);
void FUN1()
{
    int count;
    count = -1;
    fscanf(stdin, "%d", &count);
    VAR0 = 1; 
    FUN0(count);
}
extern int VAR0;
void FUN0(int count)
{
    if(VAR0)
    {
<START>
        SLEEP(count);
<END>
        printLine("Sleep time possibly too long");
    }
}

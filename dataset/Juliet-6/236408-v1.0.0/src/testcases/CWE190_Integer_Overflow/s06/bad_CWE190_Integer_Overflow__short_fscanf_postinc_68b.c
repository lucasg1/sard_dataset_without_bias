short VAR0;
short VAR1;
short VAR2;
void FUN0();
void FUN1()
{
    short data;
    data = 0;
    fscanf (stdin, "%hd", &data);
    VAR0 = data;
    FUN0();
}
extern short VAR0;
extern short VAR1;
extern short VAR2;
void FUN0()
{
    short data = VAR0;
    {
<START>
        data++;
<END>
        short result = data;
        printIntLine(result);
    }
}

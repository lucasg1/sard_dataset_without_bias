int VAR0;
int VAR1;
int VAR2;
void FUN0();
void FUN1()
{
    int data;
    data = 0;
    data = INT_MAX;
    VAR0 = data;
    FUN0();
}
extern int VAR0;
extern int VAR1;
extern int VAR2;
void FUN0()
{
    int data = VAR0;
    if(data > 0) 
    {
<START>
        int result = data * 2;
<END>
        printIntLine(result);
    }
}
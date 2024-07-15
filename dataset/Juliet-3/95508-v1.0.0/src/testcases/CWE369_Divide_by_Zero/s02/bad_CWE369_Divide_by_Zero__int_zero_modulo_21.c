static int VAR0 = 0;
void FUN0(int data)
{
    if(VAR0)
    {
<START>
        printIntLine(100 % data);
<END>
    }
}
void FUN1()
{
    int data;
    data = -1;
    data = 0;
    VAR0 = 1; 
    FUN0(data);
}

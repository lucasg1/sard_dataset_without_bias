static int VAR0 = 0;
void FUN0(int data)
{
    if(VAR0)
    {
        if(data > 0) 
        {
            int result = data * 2;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
<START>
    data = INT_MAX;
<END>
    VAR0 = 1; 
    FUN0(data);
}

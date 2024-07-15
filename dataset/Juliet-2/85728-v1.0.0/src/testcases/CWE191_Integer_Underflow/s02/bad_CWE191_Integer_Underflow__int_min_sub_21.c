static int VAR0 = 0;
void FUN0(int data)
{
    if(VAR0)
    {
        {
<START>
            int result = data - 1;
<END>
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = INT_MIN;
    VAR0 = 1; 
    FUN0(data);
}

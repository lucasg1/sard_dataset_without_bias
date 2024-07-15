static int VAR0 = 0;
void FUN0(int data)
{
    if(VAR0)
    {
        {
<START>
            data++;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = INT_MAX;
    VAR0 = 1; 
    FUN0(data);
}

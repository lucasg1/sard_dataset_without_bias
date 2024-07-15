int VAR0 = 0;
void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    data = INT_MIN;
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(int data)
{
    if(VAR0)
    {
        if(data < 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
}

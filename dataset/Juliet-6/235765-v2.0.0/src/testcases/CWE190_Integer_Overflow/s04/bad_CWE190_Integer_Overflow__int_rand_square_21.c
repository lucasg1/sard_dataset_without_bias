static int VAR0 = 0;
void FUN0(int data)
{
    if(VAR0)
    {
        {
<START>
            int result = data * data;
<END>
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    data = RAND32();
    VAR0 = 1; 
    FUN0(data);
}

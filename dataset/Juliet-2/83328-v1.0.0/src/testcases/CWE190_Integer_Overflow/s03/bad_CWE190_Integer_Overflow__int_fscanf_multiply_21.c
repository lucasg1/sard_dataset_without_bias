static int VAR0 = 0;
void FUN0(int data)
{
    if(VAR0)
    {
        if(data > 0) 
        {
<START>
            int result = data * 2;
<END>
            printIntLine(result);
        }
    }
}
void FUN1()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    VAR0 = 1; 
    FUN0(data);
}

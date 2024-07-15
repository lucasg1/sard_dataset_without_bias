static int VAR0 = 0;
void FUN0(int * data)
{
    if(VAR0)
    {
<START>
        printIntLine(*data);
<END>
    }
}
void FUN1()
{
    int * data;
    data = NULL;
    VAR0 = 1; 
    FUN0(data);
}

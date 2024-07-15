static int VAR0 = 0;
void FUN0(int data)
{
    if(VAR0)
    {
<START>
<END>
        ; 
    }
}
void FUN1()
{
    int data;
    data = 5;
    VAR0 = 1; 
    FUN0(data);
}

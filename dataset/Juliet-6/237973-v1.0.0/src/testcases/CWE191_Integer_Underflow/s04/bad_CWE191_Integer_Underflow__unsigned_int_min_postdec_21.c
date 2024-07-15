static int VAR0 = 0;
void FUN0(unsigned int data)
{
    if(VAR0)
    {
        {
<START>
            data--;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = 0;
    VAR0 = 1; 
    FUN0(data);
}

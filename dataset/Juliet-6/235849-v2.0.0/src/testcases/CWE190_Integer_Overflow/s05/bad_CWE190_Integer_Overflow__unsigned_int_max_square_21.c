static int VAR0 = 0;
void FUN0(unsigned int data)
{
    if(VAR0)
    {
        {
<START>
            unsigned int result = data * data;
<END>
            printUnsignedLine(result);
        }
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    VAR0 = 1; 
    FUN0(data);
}

static int VAR0 = 0;
void FUN0(unsigned int data)
{
    if(VAR0)
    {
        {
<START>
            unsigned int result = data + 1;
<END>
            printUnsignedLine(result);
        }
    }
}
void FUN1()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    VAR0 = 1; 
    FUN0(data);
}

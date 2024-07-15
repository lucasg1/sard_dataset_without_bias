int VAR0 = 0;
void FUN0(unsigned int data);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(unsigned int data)
{
    if(VAR0)
    {
        if(data > 0) 
        {
<START>
            unsigned int result = data * 2;
<END>
            printUnsignedLine(result);
        }
    }
}

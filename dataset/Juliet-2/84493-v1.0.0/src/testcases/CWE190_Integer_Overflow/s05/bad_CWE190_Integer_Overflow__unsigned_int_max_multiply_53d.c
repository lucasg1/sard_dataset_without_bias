void FUN0(unsigned int data);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = UINT_MAX;
    FUN0(data);
}
void FUN2(unsigned int data);
void FUN0(unsigned int data)
{
    FUN2(data);
}
void FUN4(unsigned int data);
void FUN2(unsigned int data)
{
    FUN4(data);
}
void FUN4(unsigned int data)
{
    if(data > 0) 
    {
<START>
        unsigned int result = data * 2;
<END>
        printUnsignedLine(result);
    }
}

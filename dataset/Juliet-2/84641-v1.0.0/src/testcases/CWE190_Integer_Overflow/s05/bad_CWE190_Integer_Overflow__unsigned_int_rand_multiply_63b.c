void FUN0(unsigned int * dataPtr);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = (unsigned int)RAND32();
    FUN0(&data);
}
void FUN0(unsigned int * dataPtr)
{
    unsigned int data = *dataPtr;
    if(data > 0) 
    {
<START>
        unsigned int result = data * 2;
<END>
        printUnsignedLine(result);
    }
}

void FUN0(unsigned int data);
void FUN1()
{
    unsigned int data;
    data = 0;
    data = 0;
    FUN0(data);
}
void FUN0(unsigned int data)
{
    {
<START>
        --data;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}

namespace NAMESPACE0
{
void FUN0(unsigned int &data)
{
    data = (unsigned int)RAND32();
}
void FUN1()
{
    unsigned int data;
    data = 0;
    FUN0(data);
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
} 

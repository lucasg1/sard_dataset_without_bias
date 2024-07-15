namespace NAMESPACE0
{
void FUN0(unsigned int &data)
{
    data = UINT_MAX;
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

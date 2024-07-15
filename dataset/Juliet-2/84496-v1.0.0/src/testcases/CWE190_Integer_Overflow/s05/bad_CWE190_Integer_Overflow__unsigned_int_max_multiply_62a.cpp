namespace NAMESPACE0
{
void FUN0(unsigned int &data)
{
    data = UINT_MAX;
}
} 
namespace NAMESPACE0
{
void FUN0(unsigned int &data);
void FUN2()
{
    unsigned int data;
    data = 0;
    FUN0(data);
    if(data > 0) 
    {
<START>
        unsigned int result = data * 2;
<END>
        printUnsignedLine(result);
    }
}
} 

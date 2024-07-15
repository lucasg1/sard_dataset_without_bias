namespace NAMESPACE0
{
void FUN0(unsigned int &data)
{
    data = (unsigned int)RAND32();
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
    {
<START>
        unsigned int result = data * data;
<END>
        printUnsignedLine(result);
    }
}
} 

namespace NAMESPACE0
{
void FUN0()
{
    unsigned int data;
    unsigned int &dataRef = data;
    data = 0;
    data = UINT_MAX;
    {
        unsigned int data = dataRef;
        if(data > 0) 
        {
<START>
            unsigned int result = data * 2;
<END>
            printUnsignedLine(result);
        }
    }
}
} 

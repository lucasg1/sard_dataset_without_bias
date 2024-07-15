namespace NAMESPACE0
{
void FUN0()
{
    unsigned int data;
    unsigned int &dataRef = data;
    data = 0;
    data = (unsigned int)RAND32();
    {
        unsigned int data = dataRef;
        {
<START>
            unsigned int result = data * data;
<END>
            printUnsignedLine(result);
        }
    }
}
} 

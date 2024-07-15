namespace NAMESPACE0
{
void FUN0()
{
    unsigned int data;
    unsigned int &dataRef = data;
    data = 0;
    fscanf (stdin, "%u", &data);
    {
        unsigned int data = dataRef;
        {
<START>
            unsigned int result = data + 1;
<END>
            printUnsignedLine(result);
        }
    }
}
} 

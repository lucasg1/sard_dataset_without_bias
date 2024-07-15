namespace NAMESPACE0
{
void FUN0(unsigned int &data)
{
    fscanf (stdin, "%u", &data);
}
void FUN1()
{
    unsigned int data;
    data = 0;
    FUN0(data);
    {
<START>
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}
} 

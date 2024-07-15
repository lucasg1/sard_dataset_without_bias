unsigned int FUN0(unsigned int data)
{
    fscanf (stdin, "%u", &data);
    return data;
}
unsigned int FUN0(unsigned int data);
void FUN2()
{
    unsigned int data;
    data = 0;
    data = FUN0(data);
    if(data > 0) 
    {
<START>
        unsigned int result = data * 2;
<END>
        printUnsignedLine(result);
    }
}

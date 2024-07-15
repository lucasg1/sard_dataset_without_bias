void FUN0(unsigned int * dataPtr);
void FUN1()
{
    unsigned int data;
    data = 0;
    fscanf (stdin, "%u", &data);
    FUN0(&data);
}
void FUN0(unsigned int * dataPtr)
{
    unsigned int data = *dataPtr;
    {
<START>
        --data;
<END>
        unsigned int result = data;
        printUnsignedLine(result);
    }
}

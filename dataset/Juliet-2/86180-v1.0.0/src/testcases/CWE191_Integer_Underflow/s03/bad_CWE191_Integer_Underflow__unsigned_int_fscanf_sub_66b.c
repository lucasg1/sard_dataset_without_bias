void FUN0(unsigned int dataArray[]);
void FUN1()
{
    unsigned int data;
    unsigned int dataArray[5];
    data = 0;
    fscanf (stdin, "%u", &data);
    dataArray[2] = data;
    FUN0(dataArray);
}
void FUN0(unsigned int dataArray[])
{
    unsigned int data = dataArray[2];
    {
<START>
        unsigned int result = data - 1;
<END>
        printUnsignedLine(result);
    }
}

void FUN0()
{
    unsigned int data;
    data = 0;
    if(globalFive==5)
    {
        fscanf (stdin, "%u", &data);
    }
    if(globalFive==5)
    {
        {
<START>
            unsigned int result = data * data;
<END>
            printUnsignedLine(result);
        }
    }
}

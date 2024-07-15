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
            --data;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}

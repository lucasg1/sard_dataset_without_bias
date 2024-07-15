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
        if(data > 0) 
        {
<START>
            unsigned int result = data * 2;
<END>
            printUnsignedLine(result);
        }
    }
}

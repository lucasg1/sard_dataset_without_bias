void FUN0()
{
    unsigned int data;
    data = 0;
    while(1)
    {
        fscanf (stdin, "%u", &data);
        break;
    }
    while(1)
    {
        {
<START>
            unsigned int result = data * data;
<END>
            printUnsignedLine(result);
        }
        break;
    }
}

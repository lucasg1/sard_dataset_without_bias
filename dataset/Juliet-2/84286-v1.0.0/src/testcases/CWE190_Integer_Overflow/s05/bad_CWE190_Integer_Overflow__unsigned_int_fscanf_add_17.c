void FUN0()
{
    int i,j;
    unsigned int data;
    data = 0;
    for(i = 0; i < 1; i++)
    {
        fscanf (stdin, "%u", &data);
    }
    for(j = 0; j < 1; j++)
    {
        {
<START>
            unsigned int result = data + 1;
<END>
            printUnsignedLine(result);
        }
    }
}

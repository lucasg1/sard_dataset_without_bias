void FUN0()
{
    unsigned int data;
    unsigned int *dataPtr1 = &data;
    unsigned int *dataPtr2 = &data;
    data = 0;
    {
        unsigned int data = *dataPtr1;
        fscanf (stdin, "%u", &data);
        *dataPtr1 = data;
    }
    {
        unsigned int data = *dataPtr2;
        {
<START>
            data++;
<END>
            unsigned int result = data;
            printUnsignedLine(result);
        }
    }
}

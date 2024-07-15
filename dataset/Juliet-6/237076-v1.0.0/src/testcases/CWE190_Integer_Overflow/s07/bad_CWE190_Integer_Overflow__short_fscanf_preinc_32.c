void FUN0()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    data = 0;
    {
        short data = *dataPtr1;
        fscanf (stdin, "%hd", &data);
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
        {
<START>
            ++data;
<END>
            short result = data;
            printIntLine(result);
        }
    }
}

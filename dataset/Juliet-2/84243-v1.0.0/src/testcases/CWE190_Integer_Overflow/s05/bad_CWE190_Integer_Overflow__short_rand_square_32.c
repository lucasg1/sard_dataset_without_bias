void FUN0()
{
    short data;
    short *dataPtr1 = &data;
    short *dataPtr2 = &data;
    data = 0;
    {
        short data = *dataPtr1;
        data = (short)RAND32();
        *dataPtr1 = data;
    }
    {
        short data = *dataPtr2;
        {
<START>
            short result = data * data;
<END>
            printIntLine(result);
        }
    }
}

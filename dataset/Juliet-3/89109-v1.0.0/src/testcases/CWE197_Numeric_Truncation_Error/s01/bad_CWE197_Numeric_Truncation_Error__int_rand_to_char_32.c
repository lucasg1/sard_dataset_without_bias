void FUN0()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = -1;
    {
        int data = *dataPtr1;
        data = RAND32();
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
        {
<START>
            char charData = (char)data;
<END>
            printHexCharLine(charData);
        }
    }
}

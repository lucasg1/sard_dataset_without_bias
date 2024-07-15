void FUN0()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = -1;
    {
        int data = *dataPtr1;
        data = CHAR_MAX-5;
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
        {
            short shortData = (short)data;
            printShortLine(shortData);
        }
    }
}

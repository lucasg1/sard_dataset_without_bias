void FUN0()
{
    char data;
    char *dataPtr1 = &data;
    char *dataPtr2 = &data;
    data = ' ';
    {
        char data = *dataPtr1;
        data = (char)RAND32();
        *dataPtr1 = data;
    }
    {
        char data = *dataPtr2;
        {
<START>
            char result = data * data;
<END>
            printHexCharLine(result);
        }
    }
}

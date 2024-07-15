void FUN0()
{
    char data;
    char *dataPtr1 = &data;
    char *dataPtr2 = &data;
    data = ' ';
    {
        char data = *dataPtr1;
        data = CHAR_MIN;
        *dataPtr1 = data;
    }
    {
        char data = *dataPtr2;
        {
<START>
            data--;
<END>
            char result = data;
            printHexCharLine(result);
        }
    }
}

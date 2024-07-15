void FUN0()
{
    char data;
    char *dataPtr1 = &data;
    char *dataPtr2 = &data;
    data = ' ';
    {
        char data = *dataPtr1;
        fscanf (stdin, "%c", &data);
        *dataPtr1 = data;
    }
    {
        char data = *dataPtr2;
        {
<START>
            char result = data - 1;
<END>
            printHexCharLine(result);
        }
    }
}

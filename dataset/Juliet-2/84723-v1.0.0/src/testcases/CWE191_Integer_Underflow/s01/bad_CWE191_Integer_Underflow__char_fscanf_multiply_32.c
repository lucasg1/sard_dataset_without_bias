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
        if(data < 0) 
        {
<START>
            char result = data * 2;
<END>
            printHexCharLine(result);
        }
    }
}

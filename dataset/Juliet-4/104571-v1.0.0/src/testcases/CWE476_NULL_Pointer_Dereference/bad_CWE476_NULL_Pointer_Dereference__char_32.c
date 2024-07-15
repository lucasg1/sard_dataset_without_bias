void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    {
        char * data = *dataPtr1;
        data = NULL;
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
<START>
        printHexCharLine(data[0]);
<END>
    }
}

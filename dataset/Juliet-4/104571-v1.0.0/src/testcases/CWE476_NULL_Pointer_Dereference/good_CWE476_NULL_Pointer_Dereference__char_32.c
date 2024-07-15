void FUN0()
{
    char * data;
    char * *dataPtr1 = &data;
    char * *dataPtr2 = &data;
    {
        char * data = *dataPtr1;
        data = "Good";
        *dataPtr1 = data;
    }
    {
        char * data = *dataPtr2;
        printHexCharLine(data[0]);
    }
}
void FUN1()
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
        if (data != NULL)
        {
            printHexCharLine(data[0]);
        }
        else
        {
            printLine("data is NULL");
        }
    }
}

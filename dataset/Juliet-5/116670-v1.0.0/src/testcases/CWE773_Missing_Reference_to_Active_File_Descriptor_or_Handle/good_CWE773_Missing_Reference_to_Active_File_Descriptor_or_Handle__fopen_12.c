void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(globalReturnsTrueOrFalse())
    {
        if (data != NULL)
        {
            fclose(data);
        }
        data = fopen("GoodSink_fopen.txt", "w+");
        if (data != NULL)
        {
            fclose(data);
        }
    }
    else
    {
        if (data != NULL)
        {
            fclose(data);
        }
        data = fopen("GoodSink_fopen.txt", "w+");
        if (data != NULL)
        {
            fclose(data);
        }
    }
}

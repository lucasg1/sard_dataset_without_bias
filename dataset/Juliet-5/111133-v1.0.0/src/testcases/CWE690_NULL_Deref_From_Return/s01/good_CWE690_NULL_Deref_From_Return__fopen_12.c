void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(globalReturnsTrueOrFalse())
    {
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
    }
}

void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(globalReturnsTrueOrFalse())
    {
        if (data != NULL)
        {
<START>
            _close((int)data);
<END>
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

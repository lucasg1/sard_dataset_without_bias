void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(1)
    {
<START>
        data = fopen("BadSink_fopen.txt", "w+");
<END>
        if (data != NULL)
        {
            fclose(data);
        }
    }
}

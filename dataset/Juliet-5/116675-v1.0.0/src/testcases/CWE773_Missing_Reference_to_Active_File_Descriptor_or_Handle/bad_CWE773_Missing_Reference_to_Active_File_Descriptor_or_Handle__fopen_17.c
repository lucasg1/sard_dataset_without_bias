void FUN0()
{
    int j;
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    for(j = 0; j < 1; j++)
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

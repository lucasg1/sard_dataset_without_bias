FILE * FUN0(FILE * data)
{
    data = fopen("BadSource_fopen.txt", "w+");
    return data;
}
FILE * FUN0(FILE * data);
void FUN2()
{
    FILE * data;
    data = NULL;
    data = FUN0(data);
<START>
    data = fopen("BadSink_fopen.txt", "w+");
<END>
    if (data != NULL)
    {
        fclose(data);
    }
}

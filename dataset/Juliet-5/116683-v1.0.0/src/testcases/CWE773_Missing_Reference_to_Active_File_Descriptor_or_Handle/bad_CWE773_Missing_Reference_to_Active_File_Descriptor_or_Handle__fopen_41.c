void FUN0(FILE * data)
{
<START>
    data = fopen("BadSink_fopen.txt", "w+");
<END>
    if (data != NULL)
    {
        fclose(data);
    }
}
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    FUN0(data);
}

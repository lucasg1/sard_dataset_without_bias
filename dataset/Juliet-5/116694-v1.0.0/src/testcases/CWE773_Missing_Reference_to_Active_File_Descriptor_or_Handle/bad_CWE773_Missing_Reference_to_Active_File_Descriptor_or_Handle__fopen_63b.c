void FUN0(FILE * * dataPtr);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    FUN0(&data);
}
void FUN0(FILE * * dataPtr)
{
    FILE * data = *dataPtr;
<START>
    data = fopen("BadSink_fopen.txt", "w+");
<END>
    if (data != NULL)
    {
        fclose(data);
    }
}

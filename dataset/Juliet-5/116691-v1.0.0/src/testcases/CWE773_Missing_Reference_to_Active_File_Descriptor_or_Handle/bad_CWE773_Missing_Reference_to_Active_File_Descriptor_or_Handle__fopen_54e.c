void FUN0(FILE * data);
void FUN1(FILE * data)
{
    FUN0(data);
}
void FUN1(FILE * data);
void FUN3(FILE * data)
{
    FUN1(data);
}
void FUN3(FILE * data);
void FUN5()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    FUN3(data);
}
void FUN6(FILE * data);
void FUN0(FILE * data)
{
    FUN6(data);
}
void FUN6(FILE * data)
{
<START>
    data = fopen("BadSink_fopen.txt", "w+");
<END>
    if (data != NULL)
    {
        fclose(data);
    }
}

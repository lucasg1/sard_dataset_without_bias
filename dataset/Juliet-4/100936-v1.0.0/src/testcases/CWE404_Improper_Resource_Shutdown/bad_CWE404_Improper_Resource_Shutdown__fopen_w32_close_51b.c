void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    FUN0(data);
}
void FUN0(FILE * data)
{
    if (data != NULL)
    {
<START>
        _close((int)data);
<END>
    }
}

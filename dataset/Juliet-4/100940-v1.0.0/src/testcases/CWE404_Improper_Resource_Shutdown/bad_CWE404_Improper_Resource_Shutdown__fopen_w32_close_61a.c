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
    if (data != NULL)
    {
<START>
        _close((int)data);
<END>
    }
}

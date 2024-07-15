void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    goto sink;
sink:
    if (data != NULL)
    {
<START>
        _close((int)data);
<END>
    }
}

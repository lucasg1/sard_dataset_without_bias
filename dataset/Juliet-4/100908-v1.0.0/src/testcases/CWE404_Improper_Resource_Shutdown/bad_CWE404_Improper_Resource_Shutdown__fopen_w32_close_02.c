void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(1)
    {
        if (data != NULL)
        {
<START>
            _close((int)data);
<END>
        }
    }
}

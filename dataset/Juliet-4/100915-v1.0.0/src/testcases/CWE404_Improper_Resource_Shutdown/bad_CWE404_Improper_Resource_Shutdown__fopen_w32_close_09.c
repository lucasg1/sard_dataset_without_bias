void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(GLOBAL_CONST_TRUE)
    {
        if (data != NULL)
        {
<START>
            _close((int)data);
<END>
        }
    }
}

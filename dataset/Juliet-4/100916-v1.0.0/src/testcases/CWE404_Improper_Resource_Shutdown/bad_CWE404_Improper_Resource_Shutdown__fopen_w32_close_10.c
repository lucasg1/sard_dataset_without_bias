void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(globalTrue)
    {
        if (data != NULL)
        {
<START>
            _close((int)data);
<END>
        }
    }
}

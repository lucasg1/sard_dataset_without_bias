static int FUN0()
{
    return 1;
}
static int FUN1()
{
    return 0;
}
void FUN2()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(FUN0())
    {
        if (data != NULL)
        {
<START>
            _close((int)data);
<END>
        }
    }
}

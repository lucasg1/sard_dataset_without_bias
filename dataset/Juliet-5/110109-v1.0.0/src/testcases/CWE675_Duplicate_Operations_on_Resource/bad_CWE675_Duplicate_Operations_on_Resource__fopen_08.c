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
    if(FUN0())
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(FUN0())
    {
<START>
        fclose(data);
<END>
    }
}

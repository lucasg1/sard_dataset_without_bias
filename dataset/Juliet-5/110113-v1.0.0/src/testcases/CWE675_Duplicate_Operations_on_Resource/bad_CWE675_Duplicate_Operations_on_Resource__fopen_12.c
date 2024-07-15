void FUN0()
{
    FILE * data;
    data = NULL; 
    if(globalReturnsTrueOrFalse())
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    else
    {
        data = fopen("GoodSource_fopen.txt", "w+");
    }
    if(globalReturnsTrueOrFalse())
    {
<START>
        fclose(data);
<END>
    }
    else
    {
        ; 
    }
}

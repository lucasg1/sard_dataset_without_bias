void FUN0()
{
    FILE * data;
    data = NULL; 
    if(GLOBAL_CONST_TRUE)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        fclose(data);
<END>
    }
}

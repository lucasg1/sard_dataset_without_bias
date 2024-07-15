void FUN0()
{
    FILE * data;
    data = NULL; 
    if(GLOBAL_CONST_FIVE==5)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(GLOBAL_CONST_FIVE==5)
    {
<START>
        fclose(data);
<END>
    }
}

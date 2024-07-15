void FUN0()
{
    FILE * data;
    data = NULL; 
    if(1)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(1)
    {
<START>
        fclose(data);
<END>
    }
}

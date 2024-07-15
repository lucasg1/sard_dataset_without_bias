void FUN0()
{
    FILE * data;
    data = NULL; 
    if(5==5)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(5==5)
    {
<START>
        fclose(data);
<END>
    }
}

void FUN0()
{
    FILE * data;
    data = NULL; 
    if(globalTrue)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(globalTrue)
    {
<START>
        fclose(data);
<END>
    }
}

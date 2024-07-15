void FUN0()
{
    FILE * data;
    data = NULL; 
    if(globalReturnsTrue())
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(globalReturnsTrue())
    {
<START>
        fclose(data);
<END>
    }
}

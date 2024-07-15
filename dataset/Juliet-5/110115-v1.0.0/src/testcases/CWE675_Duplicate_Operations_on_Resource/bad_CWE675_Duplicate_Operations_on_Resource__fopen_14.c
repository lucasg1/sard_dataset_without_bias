void FUN0()
{
    FILE * data;
    data = NULL; 
    if(globalFive==5)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(globalFive==5)
    {
<START>
        fclose(data);
<END>
    }
}

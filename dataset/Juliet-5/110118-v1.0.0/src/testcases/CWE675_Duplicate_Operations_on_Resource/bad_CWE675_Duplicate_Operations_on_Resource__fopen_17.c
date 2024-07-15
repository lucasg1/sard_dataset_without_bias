void FUN0()
{
    int i,j;
    FILE * data;
    data = NULL; 
    for(i = 0; i < 1; i++)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    for(j = 0; j < 1; j++)
    {
<START>
        fclose(data);
<END>
    }
}

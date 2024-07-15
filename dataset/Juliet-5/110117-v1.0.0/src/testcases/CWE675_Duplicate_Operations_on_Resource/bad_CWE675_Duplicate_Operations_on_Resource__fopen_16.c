void FUN0()
{
    FILE * data;
    data = NULL; 
    while(1)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
        break;
    }
    while(1)
    {
<START>
        fclose(data);
<END>
        break;
    }
}

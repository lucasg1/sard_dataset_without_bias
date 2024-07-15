void FUN0()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
<START>
    fclose(data);
<END>
}

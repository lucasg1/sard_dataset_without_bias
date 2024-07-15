void FUN0(FILE * data)
{
<START>
    fclose(data);
<END>
}
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    FUN0(data);
}

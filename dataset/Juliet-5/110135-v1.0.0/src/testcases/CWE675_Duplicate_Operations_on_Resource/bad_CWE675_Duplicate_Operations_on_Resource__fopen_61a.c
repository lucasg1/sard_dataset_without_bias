FILE * FUN0(FILE * data)
{
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    return data;
}
FILE * FUN0(FILE * data);
void FUN2()
{
    FILE * data;
    data = NULL; 
    data = FUN0(data);
<START>
    fclose(data);
<END>
}

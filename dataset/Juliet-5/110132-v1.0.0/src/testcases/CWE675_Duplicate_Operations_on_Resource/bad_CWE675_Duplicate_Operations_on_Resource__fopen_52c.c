void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    FUN0(data);
}
void FUN2(FILE * data);
void FUN0(FILE * data)
{
    FUN2(data);
}
void FUN2(FILE * data)
{
<START>
    fclose(data);
<END>
}

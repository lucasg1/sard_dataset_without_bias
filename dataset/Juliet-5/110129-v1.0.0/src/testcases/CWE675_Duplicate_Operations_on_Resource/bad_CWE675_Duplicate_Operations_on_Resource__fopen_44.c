void FUN0(FILE * data)
{
<START>
    fclose(data);
<END>
}
void FUN1()
{
    FILE * data;
    void (*funcPtr) (FILE *) = FUN0;
    data = NULL; 
    data = fopen("BadSource_fopen.txt", "w+");
    fclose(data);
    funcPtr(data);
}

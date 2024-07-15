void FUN0(FILE * data);
void FUN1()
{
    FILE * data;
    void (*funcPtr) (FILE *) = FUN0;
    data = NULL;
    data = fopen("file.txt", "w+");
    funcPtr(data);
}
void FUN0(FILE * data)
{
<START>
    fclose(data);
<END>
}
